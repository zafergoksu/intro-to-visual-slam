#include <gtest/gtest.h>

#include "my_slam/my_slam.hpp"

TEST(Greeting, IsNotEmpty)
{
    EXPECT_FALSE(my_slam::greeting().empty());
}
