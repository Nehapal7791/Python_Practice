#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../inc/inputoutput.h"
#include "../inc/matrix.h"
#include "../inc/iMatrix.h"
using testing::Test;
class MockClass : public iMatrix{
    public:
    MOCK_METHOD3(setElement,void(int rows,int column,int value));
};
TEST(MatrixTest,setElementTest){
    MockClass mockMatrix;
    Input input(mockMatrix);
    EXPECT_CALL(mockMatrix, setElement(0, 0, 10)).Times(1);
}
int main(int argc, char **argv)
{
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}