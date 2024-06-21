#pragma once
#include "SeaAnimal.h"

class Dolphin : public SeaAnimal
{
public:
    Dolphin(); 

    ~Dolphin(); 

    void Print() override; 
};

