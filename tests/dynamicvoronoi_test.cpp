#include <gtest/gtest.h>
// evil hack for testing private method
#define private public
#include "dynamicvoronoi.h"
#include <vector>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


