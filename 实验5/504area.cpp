#include<iostream>
using namespace std;
class student {
private:
	double grade;
	int num;
public:
	student(int n=0, double g=0.0) {
		num=n;
		grade=g;
	}
	int getnum() {
		return num;
	}
	double getgrade() {
		return grade;
	}
	void setstudent(int n, double g) {
		num = n;
		grade = g;
	}
};
void max(student* students,int n) {
	double maxgrade = students[0].getgrade();
	int maxnum = 0;
	for (int i = 1; i < n; i++) {
		if (maxgrade < students[i].getgrade()) {
			maxgrade= students[i].getgrade();
			maxnum = i;
		}
	}
	cout << "成绩最高的同学的成绩为:" << maxgrade << endl;
	cout << "成绩最高的同学的学号为:" << students[maxnum].getnum() << endl;
}
int main() {
	student students[5];
	// 设置学生数据
	students[0].setstudent(1001, 85.5);
	students[1].setstudent(1002, 92.0);
	students[2].setstudent(1003, 78.5);
	students[3].setstudent(1004, 96.5);
	students[4].setstudent(1005, 88.0);
	max(students, 5);
	return 0;
}