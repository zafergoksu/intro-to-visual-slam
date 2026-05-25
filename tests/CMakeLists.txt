find_package(GTest REQUIRED)

add_executable(my_slam_tests
    test_greeting.cpp)

target_link_libraries(my_slam_tests
    PRIVATE
        my_slam::my_slam
        GTest::gtest_main
        project_warnings)

include(GoogleTest)
gtest_discover_tests(my_slam_tests)
