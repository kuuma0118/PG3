#include "Enemy.h"
#include <stdio.h>
#include <memory>

int main() {
	// 敵の生成
	std::unique_ptr<Enemy> enemy_;
	// 敵の行動を開始させるか
	int isActive = false;

	while (true) {
		printf("1なら行動開始, 0なら終了\n");
		printf("入力:");
		scanf_s("%d", &isActive);

		// 1以外の数字なら終了
		if (isActive != 1) {
			printf("終了\n");
			break;
		}
		enemy_->Update();
	}

	return 0;
}