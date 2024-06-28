#include "Rectangle.h"
#include <iostream>

// コンストラクタ、幅と高さ指定
Rectangle::Rectangle(float width, float height) : width_(width), height_(height), size_(0.0f) {

}

// size計算　
void Rectangle::Size()
{
    size_ = width_ * height_;
    std::cout << "Size of the rectangle: " << size_ << std::endl;
}

// Draw実行
void Rectangle::Draw()
{
    std::cout << "Drawing a rectangle with width: " << width_ << " and height: " << height_ << " \nSize: " << size_ << std::endl;
}
