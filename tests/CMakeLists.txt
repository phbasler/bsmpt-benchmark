include(GoogleTest)

add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE gtest_main gtest Tensors)


gtest_discover_tests(tests)
