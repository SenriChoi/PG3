#include "Dolphin.h"
#include <iostream>


// �R���X�g���N�^
Dolphin::Dolphin() : SeaAnimal("Dolphin")
{

}

// �f�X�g���N�^

Dolphin::~Dolphin()
{
 
}


// Print ���\�b�h�̎���
void Dolphin::Print()
{
    std::cout << "Sea Animal Type: " << name << std::endl;
}