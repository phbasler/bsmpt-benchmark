set(TESTDIR ${CMAKE_CURRENT_SOURCE_DIR})
add_executable(benchmarks benchmarks.cpp)
target_link_libraries(benchmarks PRIVATE benchmark::benchmark Tensors)
target_compile_features(benchmarks PUBLIC cxx_std_17)
