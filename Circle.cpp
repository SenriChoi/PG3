#include "Circle.h"
#include <iostream>

// �R���X�g���N�^�A���a�w��
Circle::Circle(float radius) : radius_(radius), size_(0.0f)
{
}

// size�v�Z�@
void Circle::Size()
{
   size_ = pi_ * radius_ * radius_;
    std::cout << "Size of the circle: " << size_ << std::endl;
}

// Draw���s
void Circle::Draw()
{
    std::cout << "Drawing a circle with radius: " << radius_ << "\nSize:" <<size_<< std::endl;
}