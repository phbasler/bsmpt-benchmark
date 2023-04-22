set(header_path  ${PROJECT_SOURCE_DIR}/include/BSMPTBenchmark/Tensors)

add_library(Tensors STATIC )
target_sources(Tensors PRIVATE tensors.cpp PUBLIC ${header_path}/tensors.h)

target_include_directories(Tensors PUBLIC ${PROJECT_SOURCE_DIR}/include ${PROJET_BINARY_DIR}/include)
target_compile_features(Tensors PUBLIC cxx_std_17)
