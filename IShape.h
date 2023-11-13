#pragma once
class IShape
{
public:
	IShape() = default;
	~IShape() = default;
	virtual void size() = 0;

	virtual void draw() = 0;
protected:
	float areaResult_;
};