enable_testing()

add_executable(
  problemsTest
  problemsTest.cpp
)
target_link_libraries(
  problemsTest
  project_euler
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(problemsTest)