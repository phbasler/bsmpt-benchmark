set(header_path  ${PROJECT_SOURCE_DIR}/include/BSMPTBenchmark/Tensors)

add_library(Tensors STATIC )
target_sources(Tensors PRIVATE tensors.cpp PUBLIC ${header_path}/tensors.h)

target_include_directories(Tensors PUBLIC ${PROJECT_SOURCE_DIR}/include ${PROJET_BINARY_DIR}/include)
target_compile_features(Tensors PUBLIC cxx_std_17)


include(FetchContent)
  FetchContent_Declare(
    TWrap
    GIT_SHALLOW TRUE
    GIT_REPOSITORY https://github.com/phbasler/TWrap.git
    GIT_TAG patch-1)
  FetchContent_MakeAvailable(TWrap)

  target_link_libraries(Tensors PUBLIC TWrap)
