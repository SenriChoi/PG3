#pragma once
#include <iostream>
//State List
enum class State
{
	Approach,
	Shoot,
	Withdrawal
};
class Enemy
{
public:

	Enemy();
	~Enemy();
	void Update();
	void Approach();
	void Shoot();
	void Withdrawal();


private:
	static void (Enemy::* StateFunction[])();

	State nowState;

};

