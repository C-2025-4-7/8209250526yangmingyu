#include<iostream>
using namespace std;
int num(int a) {
	if (a >= 2) {
		return 2*num(a - 1)+2;
	}
	if (a == 1) {
		return 1;
	}
}
int main() {
	int sum;
	int a = 10;
	sum=num(a);
	cout << sum << endl;
}