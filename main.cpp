#include <stdio.h>
#include <iostream>
#include <string>

template <typename T>
void Min(T a, T b) {
	T merit = a < b ? a : b;
	std::cout << merit << std::endl;
}

template <>
void Min<char>(char a, char b) {
	std::cout << "数字以外は代入できません" << std::endl;
}

int main() {
	Min(1, 5);
	Min(2.0f, 5.0f);
	Min(3.0, 5.0);
	Min('a', 'b');

	return 0;
}