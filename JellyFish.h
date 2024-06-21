#pragma once
#include "SeaAnimal.h"
class JellyFish:public SeaAnimal
{
public:
	JellyFish();

	~JellyFish();

	void Print() override;
};

