#include<iostream>
using namespace std;
class Time             
{
private:              
	int hour;
	int minute;
	int sec;
public:
	void SetTime() {
		for (int i = 0;;) {
			cin >> hour >> minute >> sec;
			if (hour >= 24 || minute >= 60 || sec >= 60) {
				cout << "error，请重新输入。" << endl;
			}
			else {
				break;
			}
		}
	}
	void ShowTime() {
		cout << (hour < 10 ? "0" : "") << hour << ":"
			<< (minute < 10 ? "0" : "") << minute << ":"
			<< (sec < 10 ? "0" : "") << sec << endl;
	}
};
int main()
{
	Time t1;
	cout << "请输入时间：" << endl;
	t1.SetTime();
	cout << "时间为：" << endl;
	t1.ShowTime();
	return 0;
}
