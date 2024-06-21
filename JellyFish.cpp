#include "JellyFish.h"
#include <iostream>


// コンストラクタ
JellyFish::JellyFish() : SeaAnimal("Jellyfish") {

}

// デストラクタ
JellyFish::~JellyFish()
{

}

// Print メソッドの実装
void JellyFish::Print()
{
	std::cout << "Sea Animal Type: " << name << std::endl;
}