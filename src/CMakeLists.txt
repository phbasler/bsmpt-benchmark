set(LIB_NAME someLibrary)

set(header )
set(src
        printHelloWorld.cpp)
        
add_library(${LIB_NAME} ${header} ${src})
target_include_directories(${LIB_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include ${PROJET_BINARY_DIR}/include)
target_compile_features(${LIB_NAME} PUBLIC cxx_std_17)
