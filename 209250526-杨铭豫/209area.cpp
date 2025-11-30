#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int sum = 0;
	double m;
	int t = 0;
	for (int a = 2; a <= 100; a*=2){
		sum += a;
		t++;	//天数
	}
	m = sum / t;
	cout <<"平均每天买的苹果个数为："<< m << endl;//算出平均每天买的苹果个数
	printf("平均每天花费%f元\n", m * 0.8);
	return 0;
}