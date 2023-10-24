#include <cmath>
float obsah_trojuhelniku(float a, float b, float c) {
	double s = (a + b + c) / 2.0;
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}