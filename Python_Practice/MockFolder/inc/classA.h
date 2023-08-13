#pragma once
#include "IclassA.h"
class A : public IclassA {
public:
    bool functionOne() ;
    virtual int getValue() const;
};