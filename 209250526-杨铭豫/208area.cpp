#include<iostream>
using namespace std;
double a;
int main(){
	double pf(double x);
cout << "please input a number:" << endl;
cin >> a;
cout << "a的平方根是:" << pf(a) << endl;
}
double pf(double x)
{
	for (double x=a;;) {
		double m = x;
		x = (x / 2 + (a / x) / 2);
		if ((x-m) <= 1e-5&&(m-x)<=1e-5)
			break;
		return x;
	}
}