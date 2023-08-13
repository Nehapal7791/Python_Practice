#ifndef IMATRIX_H
#define IMATRIX_H
#include <stdexcept>

class iMatrix
{
public:
    virtual void setElement(int row, int column, int value)=0;
};

#endif