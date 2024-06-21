#pragma once

class SeaAnimal
{
protected:

	const char *name;

public:
	// コンストラクタ
	SeaAnimal(const char* name);
	// デストラクタ
	virtual ~SeaAnimal();
	// print the name
	virtual void Print();

};

