#include "Rectangle.h"
#include <iostream>

// �R���X�g���N�^�A���ƍ����w��
Rectangle::Rectangle(float width, float height) : width_(width), height_(height), size_(0.0f) {

}

// size�v�Z�@
void Rectangle::Size()
{
    size_ = width_ * height_;
    std::cout << "Size of the rectangle: " << size_ << std::endl;
}

// Draw���s
void Rectangle::Draw()
{
    std::cout << "Drawing a rectangle with width: " << width_ << " and height: " << height_ << " \nSize: " << size_ << std::endl;
}
