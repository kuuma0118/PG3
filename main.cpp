#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <functional>

int main() {
	// 乱数の初期値を生成
	srand((unsigned int)time(nullptr));
	// サイコロの目をランダムで決定
	std::function<int()> randomDice = [&]() {
		int result = rand() % 6 + 1;
		return result;
	};

	// 指定した秒数処理を止める
	std::function<void(int)> SetTimeout = [](int waitTime) {
		Sleep(1000 * waitTime);
	};

	// 結果発表用の変数
	std::function<void(int, int, int)> result = [&](int answerDice, int selectAnswer, int waitTime) {
		printf("勝敗は...\n");
		// 3秒間処理を停止
		SetTimeout(waitTime);

		// 正解のサイコロ
		int answerDiceNum = answerDice % 2;
		// 予想したサイコロ
		int selectDiceNum = selectAnswer % 2;

		// 偶数なら丁
		if (answerDiceNum == 0) {
			printf("丁!\n");
			SetTimeout(waitTime);
		}// 奇数なら半
		else if (answerDiceNum != 0) {
			printf("半!\n");
			SetTimeout(waitTime);
		}

		// どちらも同じ数なら正解
		if (selectDiceNum == answerDiceNum) {
			printf("勝利\n\n");
		}
		else {
			printf("敗北\n\n");
		}
	};

	// 入力した予想
	int selectAnswer;

	printf("サイコロは丁( 2 )又は半( 1 )どちらか\n\n");
	while (1) {
		printf("丁( 2 )、半( 1 )どちらかを入力\n");
		printf("予想:");
		scanf_s("%d", &selectAnswer);

		// 結果発表
		result(randomDice(), selectAnswer, 3);
	}

	return 0;
}