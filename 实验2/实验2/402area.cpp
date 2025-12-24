#include<iostream>
using namespace std;
int main() {
	double q[10];
	cout << "Enter 10 numbers:" << endl;
	for(int i=0;i<10;i++) {
		cin>>q[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int x = 0; x < 10 - i - 1; x++) {
			double b = q[x];
			if (q[x] > q[x + 1]) {
				q[x] = q[x + 1];
				q[x + 1] = b;
			}
		}
	}
	for(int i=0;i<10;i++) {
		cout<<q[i]<<endl;
	}
	return 0;
}