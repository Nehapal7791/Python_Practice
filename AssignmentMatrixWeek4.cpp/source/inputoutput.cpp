#include <iostream>
#include <limits>
#include "../inc/inputoutput.h"
#include "../inc/matrix.h"
void Input::userInputRowsAndColumn(int &rows, int &columns)
{
    std::cout << "Enter the row of Matrix: ";
    rows = errorHandling();
    std::cout << "Enter the column of Matrix: ";
    columns = errorHandling();
}
Input::Input(iMatrix &obj):obj(obj){};
void Input::readInput(int rows, int columns)
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            int val = errorHandling();
            obj.setElement(row, column, val);
        }
    }
}
void Input::Addition()
{
    int rows, columns;
    userInputRowsAndColumn(rows, columns);
    Matrix matrixOne(rows, columns);
    Matrix matrixTwo(rows, columns);
    std::cout << "Enter the elements of matrix One:" << std::endl;
    readInput(rows, columns);
    std::cout << "Enter the elements of matrix Two:" << std::endl;
    readInput( rows, columns);
    Matrix sum = matrixOne + matrixTwo;
    std::cout << "The sum of the two matrices is:" << std::endl;
    sum.display();
}
void Input::Multiplication()
{
    int row, column;
    userInputRowsAndColumn(row, column);
    Matrix matrixOne(row, column);
    std::cout << "Enter the elements of matrix One:" << std::endl;
    readInput( row, column);
    userInputRowsAndColumn(row, column);
    Matrix matrixTwo(row, column);
    if (matrixOne.getColumns() != matrixTwo.getRows())
    {
        std::cout << "Matrix dimensions do not match\n";
        return;
    }
    std::cout << "Enter the elements of matrix Two:" << std::endl;
    readInput( row, column);
    Matrix multiplication = matrixOne * matrixTwo;
    std::cout << "The multiplication of the two matrices is:" << std::endl;
    multiplication.display();
}
void Input::operation()
{
    
    int input;
    int row, column;
    std::cout << "Enter operator Addition(1) or Multiplication(2): \n";
    input = errorHandling();
    switch (input)
    {
    case 1:
        std::cout << "You Performing Addition Operation" << std::endl;
        Addition();
        break;
    case 2:
        std::cout << "You Performing Multiplication operation" << std::endl;
        Multiplication();
        break;
    default:
        std::cout<<"Invalid Input"<<std::endl;
    }
}   
void Input::continueForInput(char choice)
{
    std::cout << "Do you want to continue (y/n)? ";
    std::cin >> choice;
    if (choice == 'n' || choice == 'N')
    {
        std::cout << "Exited" << std::endl;
        exit(0);
    }
}
int Input::errorHandling()
{
    int number;
    char choice = ' ';
    while (true)
    {
            std::cin >> number;
            if (std::cin.fail())
            {
                if (std::cin.peek() != '\n')
                {
                    std::cout << "Invalid input. Please try again." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continueForInput(choice);
                    if (std::cin.peek() == '\n')
                    {
                        std::cin.ignore();
                    }
                }
            }
            else
            {
                break;
            }
    }
    return number;
}