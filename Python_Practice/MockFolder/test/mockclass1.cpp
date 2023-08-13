#include "gmock/gmock.h"
#include"../inc/MockA.h"
using ::testing::Return;

TEST(TEST,functionOne){
}
TEST(TEST, functionOne) {
    MockA mockA; 

    ON_CALL(mockA, getValue()).WillByDefault(Return(42));
    int result = mockA.getValue();
    EXPECT_EQ(result, 42);

}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

