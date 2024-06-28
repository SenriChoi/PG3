#pragma once
#include "IShape.h"

class Circle :public IShape
{
public:
	Circle(float radius);
	void Size() override;// Size���\�b�h���I�[�o�[���C�h
	void Draw() override;// Draw���\�b�h���I�[�o�[���C�h

private:
	const float pi_ = 3.14159f;// �萔�����o�ϐ�:�~����
	float radius_;// ���a
	float size_; // �ʐ�

};

