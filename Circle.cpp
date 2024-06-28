#include "Circle.h"
#include <iostream>

// コンストラクタ、半径指定
Circle::Circle(float radius) : radius_(radius), size_(0.0f)
{
}

// size計算　
void Circle::Size()
{
   size_ = pi_ * radius_ * radius_;
    std::cout << "Size of the circle: " << size_ << std::endl;
}

// Draw実行
void Circle::Draw()
{
    std::cout << "Drawing a circle with radius: " << radius_ << "\nSize:" <<size_<< std::endl;
}