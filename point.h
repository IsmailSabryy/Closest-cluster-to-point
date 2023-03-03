#pragma once
class point
{
private:
	float x;
	float y;
public:
	point();
	point(float, float);
	void setterx(float);
	void settery(float);
	float getterx();
	float gettery();
	void display();
	float distance(point& p);
};

