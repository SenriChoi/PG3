#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {
    // IShape型のポインタ配列
    IShape* shapes[2];

    // Circle作成
    shapes[0] = new Circle(5.0f); 
    // Rectangle作成
    shapes[1] = new Rectangle(4.0f, 3.0f);



    for (int i = 0; i < 2; ++i) {
        shapes[i]->Size();  // 面積計算
        shapes[i]->Draw();  // 描画
    }


    for (int i = 0; i < 2; ++i) {
        delete shapes[i];  //解放
    }

	return 0;
}
