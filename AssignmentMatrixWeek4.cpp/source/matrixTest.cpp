#include "../inc/matrix.h"
#include "../inc/inputoutput.h"
#include <gtest/gtest.h>
class MatrixTest : public ::testing::Test
{
  protected:
    Matrix *matrix;
    void SetUp() override
    {
      matrix = new Matrix(3, 3);
    }
    void TearDown() override
    {
      delete matrix;
    }
};
TEST_F(MatrixTest, GetRows)
{
  EXPECT_EQ(matrix->getRows(), 3);
  ASSERT_NE(matrix->getRows(), 4);
}
TEST_F(MatrixTest, GetColumns)
{
  EXPECT_EQ(matrix->getColumns(), 3);
  ASSERT_NE(matrix->getColumns(), 4);
}
TEST_F(MatrixTest, SetAndGetElement)
{
  matrix->setElement(0, 0, 1);
  matrix->setElement(0, 1, -8);
  matrix->setElement(1, 0, 3);
  matrix->setElement(1, 1, -1);
  EXPECT_EQ(matrix->getElement(0, 0), 1);
  EXPECT_EQ(matrix->getElement(0, 1), -8);
  EXPECT_EQ(matrix->getElement(1, 0), 3);
  EXPECT_EQ(matrix->getElement(1, 1), -1);
}
TEST(MatrixTestforAddition, OperatorAddition)
{
  Matrix matrix1(3, 3);
  Matrix matrix2(3, 3);
  matrix1.setElement(0, 0, 1);
  matrix1.setElement(0, 1, -3);
  matrix1.setElement(1, 0, -7);
  matrix1.setElement(1, 1, 8);
  matrix1.setElement(2, 0, 4);
  matrix1.setElement(2, 1, 6);
  matrix1.setElement(0, 2, 6);
  matrix1.setElement(1, 2, 6);
  matrix1.setElement(2, 2, 6);

  matrix2.setElement(0, 0, 2);
  matrix2.setElement(0, 1, -3);
  matrix2.setElement(1, 0, 4);
  matrix2.setElement(1, 1, -2);
  matrix2.setElement(2, 0, 6);
  matrix2.setElement(2, 1, 2);
  matrix2.setElement(0, 2, 6);
  matrix2.setElement(1, 2, 6);
  matrix2.setElement(2, 2, 6);

  Matrix result = matrix1 + matrix2;

  EXPECT_EQ(result.getElement(0, 0), 3);
  EXPECT_EQ(result.getElement(0, 1), -6);
  EXPECT_EQ(result.getElement(1, 0), -3);
  EXPECT_EQ(result.getElement(1, 1), 6);
  EXPECT_EQ(result.getElement(2, 0), 10);
  EXPECT_EQ(result.getElement(2, 1), 8);
  EXPECT_EQ(result.getElement(0, 2), 12);
  EXPECT_EQ(result.getElement(1, 2), 12);
  EXPECT_EQ(result.getElement(2, 2), 12);
}
TEST(MatrixTestforMultiplication, OperatorMultiplication)
{
  Matrix matrix1(2, 2);
  Matrix matrix2(2, 2);
  matrix1.setElement(0, 0, 1);
  matrix1.setElement(0, 1, 2);
  matrix1.setElement(1, 0, 3);
  matrix1.setElement(1, 1, 4);
  matrix2.setElement(0, 0, 5);
  matrix2.setElement(0, 1, 6);
  matrix2.setElement(1, 0, 7);
  matrix2.setElement(1, 1, 8);
  Matrix result = matrix1 * matrix2;

  EXPECT_EQ(result.getElement(0, 0), 19);
  EXPECT_EQ(result.getElement(0, 1), 22);
  EXPECT_EQ(result.getElement(1, 0), 43);
  EXPECT_EQ(result.getElement(1, 1), 50);
}
int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}