#pragma once
#include "IShape.h"

class Circle :public IShape
{
public:
	Circle(float radius);
	void Size() override;// Sizeメソッドをオーバーライド
	void Draw() override;// Drawメソッドをオーバーライド

private:
	const float pi_ = 3.14159f;// 定数メンバ変数:円周率
	float radius_;// 半径
	float size_; // 面積

};

