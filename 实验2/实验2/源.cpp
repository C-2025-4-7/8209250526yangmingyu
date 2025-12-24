#include<iostream>
using namespace std;
class Clock {
private:
	int H, S, M;
public:
	void Showtime() {
		cout << "time is:" << H << ":" << M << ":" << S << ":" << endl;
	}
	void Settime(int H=0,int M=0,int S=0) {
		this->H = H, this->M = M, this->S = S;
	}
	Clock(int H, int M, int S) {
		this->H = H, this->M = M, this->S = S;
	}
	int GetH(){
		return H;
	}
	int GetM() {
		return M;
	}
	int GetS() {
		return S;
	}
};
class trantrip {
private:
	char* tranno;

};