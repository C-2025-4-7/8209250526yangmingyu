#include<iostream>
using namespace std;
int main() {
	char c;
	cout << "请输入一个字符：";
	cin >> c;
	if (c >= 'a' && c <= 'z') {
		c -= 32;// 转换为大写字母
		cout << "对应的大写字母是：" << c << endl;
	}
	else if (c >= 'A' && c <= 'Z') {
		cout << c << endl;// 已经是大写字母，直接输出
	}
	else {
		cout << "后继字符对应的ASCII码值为：" << static_cast<int>(c + 1)<< endl;
	}// 输出ASCII码值加1的结果
	return 0;
}