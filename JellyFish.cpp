#include "JellyFish.h"
#include <iostream>


// �R���X�g���N�^
JellyFish::JellyFish() : SeaAnimal("Jellyfish") {

}

// �f�X�g���N�^
JellyFish::~JellyFish()
{

}

// Print ���\�b�h�̎���
void JellyFish::Print()
{
	std::cout << "Sea Animal Type: " << name << std::endl;
}