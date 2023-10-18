#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
double h(const double a, const double b); // прототип
int main()
{
	double s, t;
	cout << "a = "; cin >> s;
	cout << "b = "; cin >> t;
	double c = (h(1, s*t) + h(t + s, 1)*h(t + s, 1)) / (1 + h(s, t)*h(s, t)*h(s, t));
	cout << "c = " << c << endl;
	cin >> s;
	return 0;
}
double h(const double a, const double b) // визначення
{
	return a*a-sin(b)*cos(a)+b*b;
}

