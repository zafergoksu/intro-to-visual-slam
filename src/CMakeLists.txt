add_library(my_slam
    my_slam.cpp)
add_library(my_slam::my_slam ALIAS my_slam)

target_include_directories(my_slam
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>)

target_link_libraries(my_slam PRIVATE project_warnings)
