#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
    Rectangle(float width, float height);  
    void Size() override;// Sizeメソッドをオーバーライド
    void Draw() override;// Drawメソッドをオーバーライド


private:
    float width_;  // 幅
    float height_; // 高さ
    float size_;  // 面積
};
