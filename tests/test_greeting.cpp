#include <gtest/gtest.h>

#include "my_slam/my_slam.hpp"

TEST(Greeting, IsNotEmpty)
{
    EXPECT_TRUE(my_slam::greeting().empty());
}
