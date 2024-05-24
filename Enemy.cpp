#include "Enemy.h"

Enemy::Enemy() {
    nowState = State::Approach;
};
Enemy::~Enemy() {};


//State�e�[�u��
void(Enemy::* Enemy::StateFunction[])() = {
&Enemy::Approach,
&Enemy::Shoot,
&Enemy::Withdrawal
};

// Approach state
void Enemy::Approach() {
    std::cout << "Approaching" << std::endl;
}
// Shoot state
void Enemy::Shoot() {
    std::cout << "Shooting" << std::endl;
   
}
// Withdrawal state
void Enemy::Withdrawal() {
    std::cout << "Withdrawing" << std::endl;
}

void Enemy::Update() {
    // ���݃t�F�[�Y�����s�@�@�i�����o�֐��e�[�u���Ăяo���j
    (this->*StateFunction[static_cast<size_t>(nowState)])();

    //state�X�V
    if (nowState == State::Approach) {

        nowState = State::Shoot;
    }
    else if (nowState == State::Shoot) {

        nowState = State::Withdrawal;
    }
    else if (nowState == State::Withdrawal)
    {
        nowState = State::Approach;
    }


};

