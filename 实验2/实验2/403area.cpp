#include<iostream>
using namespace std;
int main() {
	bool m[100] = { 0 };
	for(int i = 0; i <100; i++) {
		m[i] = 1;
	}
	for (int i = 2; i <= 100; i++) {
		for (int x = i-1; x < 100; x += i+1) {
			m[x] = !m[x];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (m[i] == 1) {
			cout << i + 1 << "\t";
		}
	}
}