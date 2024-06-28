#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

    // Circle作成
    Circle circle(5.0f); 
    circle.Size();        // 面積計算
    circle.Draw();        // 描画

    // Rectangle作成
    Rectangle rectangle(4.0f, 3.0f); 
    rectangle.Size();       // 面積計算
    rectangle.Draw();       // 描画


	return 0;
}
