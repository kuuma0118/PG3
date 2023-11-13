#include "Enemy.h"
#include <stdio.h>
#include <windows.h>

void Enemy::Update() {
	(this->*pfunc[MELEE])();
	Sleep(100);

	(this->*pfunc[FIRE])();
	Sleep(100);

	(this->*pfunc[LEAVE])();
	Sleep(100);
}

void (Enemy::* Enemy::pfunc[])() = {
	&Enemy::Melee,	// 
	&Enemy::Fire,	// 
	&Enemy::Leave	// 
};

void Enemy::Melee() {
	printf("近接\n");
}

void Enemy::Fire() {
	printf("射撃‚\n");
}

void Enemy::Leave() {
	printf("離脱’E\n\n");
}