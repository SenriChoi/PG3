#pragma once

class SeaAnimal
{
protected:

	const char *name;

public:
	// �R���X�g���N�^
	SeaAnimal(const char* name);
	// �f�X�g���N�^
	virtual ~SeaAnimal();
	// print the name
	virtual void Print();

};

