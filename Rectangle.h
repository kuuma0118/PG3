#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();
	void size() override;
	void draw() override;
private:
	// ‰¡•
	int width_;
	// c•
	int height_;
};