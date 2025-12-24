#ifndef MYTRIANGLE_H
#define MYTRIANGLE_H
#include<cmath>
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 < side3 || side1 + side3 < side2 || side2 + side3 < side1) {
		return false;
	}
	else {
		return true;
	}
}
double triangle_area(double side1, double side2, double side3) {
	if (is_valid(side1, side2, side3)) {
		double s = (side1 + side2 + side3) / 2.0;
		return sqrt(s * (s - side1) * (s - side2) * (s - side3));
	}
	else {
		return 0.0;
	}
}
#endif