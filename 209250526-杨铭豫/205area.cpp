#include<iostream>
using namespace std;
int main() {
	char c;
	int letters = 0;
	int spaces = 0;
	int digits = 0;
	int others = 0;
	cout << "请输入一段字符：(以换行结束）" << endl;
	while ((c = cin.get()) != '\n') {
		if (isalpha(c)) {
			letters++;
		}
		else if (isdigit(c)) {
			digits++;
		}
		else if (isspace(c)) {
			spaces++;
		}
		else {
			others++;
		}
		}
	cout << "\n结果为"<<endl;
	cout << "英文字母个数为：\n" << letters<<endl;
	cout << "数字符个数为：\n" <<digits<< endl;
	cout << "空格个数：\n" << spaces<<endl;
	cout << "其他字符个数为：\n" << others<<endl;
	return 0;
	}