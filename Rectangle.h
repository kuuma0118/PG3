#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:

	void size() override {
		space = width * height;
	};
	void draw() override {
		printf("四角形の面積：%.2f\n", space);
	};

private:
	float width = 2;
	float height = 3;
	float space = 0;
};