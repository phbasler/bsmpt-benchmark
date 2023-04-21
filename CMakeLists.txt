cmake_minimum_required(VERSION 3.13)
project(
  cmakeTemplate
  VERSION 0.1.0
  LANGUAGES C CXX
  DESCRIPTION "My cmake template")

# -------------------------------- setup cmake --------------------------------
if(POLICY CMP0074)
  cmake_policy(SET CMP0074 NEW) # use <packagename>_ROOT as search path
endif(POLICY CMP0074)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/tools/cmake")

include(CompilerOptions)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release")
endif(NOT CMAKE_BUILD_TYPE)

set(PROJECT_INCLUDE_BASE_PATH "${PROJECT_SOURCE_DIR}/include/cmakeTemplate")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")


include(LTO)

option(cmakeTemplate_UseConan "Use conan to get dependencies" OFF)
option(cmakeTemplate_EnableTests "Enable unit tests" OFF)

if(cmakeTemplate_UseConan)
	list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
	include(conan)
	set(ConanPkgList eigen/3.4.0 
		         gsl/2.7				     
		         boost/1.78.0)

	if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
	        set(ConanPkgList ${ConanPkgList} benchmark/1.6.1)
	endif()
	conan_cmake_configure(REQUIRES ${ConanPkgList}
                      GENERATORS cmake_find_package)
					  
	
	conan_cmake_autodetect(settings)

	conan_cmake_install(PATH_OR_REFERENCE .
                    BUILD missing
                    REMOTE conancenter
                    SETTINGS ${settings})
	
endif(cmakeTemplate_UseConan)


find_package(PkgConfig)
find_package(Eigen3 3.4.0)
find_package(Boost 1.78)
find_package(GSL 2.7)

find_package(Threads REQUIRED)

find_lto(CXX)


add_subdirectory(src)


# -------------------------- export as cmake package --------------------------
if(PROJECT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
  include(CMakePackageConfigHelpers)
  write_basic_package_version_file(
    cmakeTemplateConfigVersion.cmake
    VERSION ${PACKAGE_VERSION}
    COMPATIBILITY AnyNewerVersion)

  set(ExportList
    someLibrary
    )


  export(
    TARGETS ${ExportList}
    NAMESPACE cmakeTemplate::
    FILE cmakeTemplateTargets.cmake
    )




  configure_file(tools/cmake/cmaketemplateConfig.cmake.in cmaketemplateConfig.cmake @ONLY)


  export(PACKAGE cmakeTemplate)
endif()



# ------------------------ Doxygen --------------------------------------------

find_package(Doxygen)
if(DOXYGEN_FOUND)

  set(DOXYGEN_USE_MATHJAX YES)
  set(DOXYGEN_STRIP_FROM_INC_PATH "${CMAKE_CURRENT_SOURCE_DIR}/include")
  set(DOXYGEN_PROJECT_BRIEF ${CMAKE_PROJECT_DESCRIPTION})
  set(DOXYGEN_EXTRACT_PRIVATE YES)
  set(DOXYGEN_GENERATE_TREEVIEW YES)
  set(DOXYGEN_DISTRIBUTE_GROUP_DOC YES)
  set(DOXYGEN_WARN_IF_UNDOCUMENTED YES)
  set(DOXYGEN_WARN_IF_DOC_ERROR YES)
  set(DOXYGEN_USE_MDFILE_AS_MAINPAGE README.md)

  doxygen_add_docs(doc
                     "${CMAKE_CURRENT_SOURCE_DIR}/include/"
                     "${CMAKE_CURRENT_SOURCE_DIR}/src/"
                     "${CMAKE_CURRENT_SOURCE_DIR}/README.md")

else (DOXYGEN_FOUND)
  message("Doxygen need to be installed to generate the doxygen documentation")
endif(DOXYGEN_FOUND)



# -------------------- Testing ---------------------------------------------------
if(cmakeTemplate_EnableTests)
	if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
	    include(CTest)
	endif()

	if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
	    add_subdirectory(tests)
	endif()
endif()
