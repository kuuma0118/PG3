#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
	IShape* shape[2];
	// 円の生成
	shape[0] = new Circle();
	// 矩形の生成
	shape[1] = new Rectangle();

	for (int i = 0; i < 2; i++) {
		// 面積を求める
		shape[i]->size();
		// 面積の表示
		shape[i]->draw();
	}

	return 0;
}