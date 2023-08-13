#include"gmock/gmock.h"
#include"gtest/gtest.h"
#include "classA.h"

class MockA : public A {
public:
    MOCK_CONST_METHOD0(getValue, int());
};
