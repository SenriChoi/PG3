#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
    Rectangle(float width, float height);  
    void Size() override;// Size���\�b�h���I�[�o�[���C�h
    void Draw() override;// Draw���\�b�h���I�[�o�[���C�h


private:
    float width_;  // ��
    float height_; // ����
    float size_;  // �ʐ�
};
