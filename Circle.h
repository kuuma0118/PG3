#pragma once
#include "IShape.h"

class Circle : public IShape {
public:

	void size() override {
		space = radius * radius * 3.14f;
	};
	void draw() override {
		printf("円の面積：%.2f\n", space);
	};

private:
	float radius = 2;

	float space = 0;
};