#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; s[i] != '\0'; i++) {
		char ch = s[i];
		if (s[i] <= 'Z' && s[i] >= 'A')
			ch = ch + 32;
		counts[ch - 'a']++;
	}
}
int main() {
	const int max_size = 100;
	char str[max_size];
	int counts[26] = { 0 };
	cout << "请输入一个字符串：" << endl;
	cin.getline(str, max_size);
	count(str, counts);
	cout << "各个字母出现的次数为：" << endl;
	for (int i = 0; i < 26; i++) {
		char sh = 'a' + i;
		cout << sh << ":" << counts[i] << endl;
	}
}