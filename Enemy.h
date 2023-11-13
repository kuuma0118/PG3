#pragma once

class Enemy
{
public:
	void Update();

	// 近接攻撃
	void Melee();
	// 射撃
	void Fire();
	// 離脱
	void Leave();

private:
	enum Behavior {
		MELEE,
		FIRE,
		LEAVE
	};
	static void (Enemy::* pfunc[])();
};