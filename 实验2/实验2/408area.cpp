#include <iostream>
#include<stdio.h>
#include <cctype>
#include <cstring>
using namespace std;
int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);

    for (int i = 0; i < len; i++) {
        char c = hexString[i];
        int digit;
        if (c >= '0' && c <= '9') {
            digit = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            digit = 10 + (c - 'A');
        }
        else if (c >= 'a' && c <= 'f') {
            digit = 10 + (c - 'a');
        }
        else {
            return -1;
        }
        result = result * 16 + digit;
    }

    return result;
}
int main() {
    char* hexString = new char[100];
	cout << "请输入一个十六进制字符串：";
    scanf_s("%s", hexString,100);
	int decimalValue = parseHex(hexString);
    if (decimalValue != -1) {
        cout<<decimalValue << endl;
    }
    else {
        cout << "输入的字符串不是有效的十六进制字符串。" << endl;
	}
    delete[] hexString;
    return 0;
}