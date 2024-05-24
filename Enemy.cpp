#include "Enemy.h"

Enemy::Enemy() {
    nowState = State::Approach;
};
Enemy::~Enemy() {};


//Stateテーブル
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
    // 現在フェーズを実行　　（メンバ関数テーブル呼び出し）
    (this->*StateFunction[static_cast<size_t>(nowState)])();

    //state更新
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

