#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;
point::point() {
	x = y = 0;
}
point::point(float x1, float y1)
{
	x = x1;
	y = y1;

}
void point::setterx(float xpt) {
	x = xpt;

}
void point::settery(float ypt) {
	y = ypt;

}
float point::getterx() {
	return x;
}
float point::gettery() {
	return y;
}
void point::display() {
	cout << "(" << x << "," << y << ")" << endl;

}
float point::distance(point& p) {

	return sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
}

