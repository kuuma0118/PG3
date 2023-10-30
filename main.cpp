#include <stdio.h>
#include <stdlib.h>
#include <functional>
#include <Windows.h>
#include <time.h>

int main() {
	srand((unsigned int)time(nullptr));

	int Choice;
	
	std::function<int()> answer = []() {return rand() % 6 + 1; };

	std::function<void(std::function<int()>, bool, int)> callBack = [](std::function<int()> func, bool ans, int second) {

		int num = func();

		printf("結果は");
		for (int i = 0; i < second; i++) {
			printf(".");
			Sleep(1000);
		}

		printf("%d\n", num);
		
		if (ans == num % 2) {
			printf("正解！\n");
		}

		else {
			printf("残念！\n");
		}

	};

	while (true) {

		printf("半(奇数)なら1、丁(偶数)なら0を入力してください。（それ以外の数字で終了） -> ");

		scanf_s("%d", &Choice);
		
		if (Choice != 0 && Choice != 1) {
			break;
		}

		callBack(answer, (bool)Choice, 3);
	}
}