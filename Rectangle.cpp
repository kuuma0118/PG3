#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle() {
	width_ = 20;
	height_ = 30;
	printf("矩形の情報\n");
	printf("縦:%d\n", height_);
	printf("横:%d\n\n", width_);
}

Rectangle::~Rectangle() {

}

void Rectangle::size() {
	// 面積を求める(縦 x 横)
	areaResult_ = width_ * height_;

	printf("矩形の面積を計算\n");
	printf("式:%d * %d\n\n", width_, height_);
}

void Rectangle::draw() {
	printf("矩形の面積は%.0f\n\n", areaResult_);
}