#pragma once
#include"../inc/IclassA.h"
class B{    
    IclassA *ia;
    public:
    B(IclassA* s) {
        ia = s;
    }
    int functionTwo(int a,int b);
};