#include "Dolphin.h"
#include <iostream>


// コンストラクタ
Dolphin::Dolphin() : SeaAnimal("Dolphin")
{

}

// デストラクタ

Dolphin::~Dolphin()
{
 
}


// Print メソッドの実装
void Dolphin::Print()
{
    std::cout << "Sea Animal Type: " << name << std::endl;
}