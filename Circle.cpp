#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
	radius_ = 20;
	printf("円の情報\n");
	printf("半径:%d\n\n", radius_);
}

Circle::~Circle() {

}

void Circle::size() {
	// 円周率
	const float PI = 3.14f;
	// 面積を求める(縦 x 横　x 円周率)
	areaResult_ = radius_ * radius_ * PI;

	printf("円の面積を計算\n");
	printf("式:%d * %d * 3.14\n\n", radius_, radius_);
}

void Circle::draw() {
	printf("円の面積は%.2f\n\n", areaResult_);
}