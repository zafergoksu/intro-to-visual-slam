add_executable(my-slam
    main.cpp)

target_link_libraries(my-slam
    PRIVATE
        my_slam::my_slam
        project_warnings)
