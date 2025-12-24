#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
	if (s1 == nullptr || s1[0] == '\0')
		return 0;
	if (s2 == nullptr) {
		return -1;
	}
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len2 < len1)
		return -1;
	for (int i = 0; i <= len2 - len1; i++) {
		bool match = true;
		for (int x = 0; x < len1; x++) {
			if (s2[i + x] != s1[x])
				match = 0;
			break;
		}
		if (match) {
			return i;
		}
	}
	return -1;
}
int main() {
	char* s1 = new char[100];
	char* s2 = new char[100];
	const int MAX_LENGTH = 100;
	cout << "Enter the first string: ";
	cin.getline(s1, MAX_LENGTH);
	cout << "Enter the second string: ";
	cin.getline(s2, MAX_LENGTH);
	int result = indexof(s1, s2);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;
	delete[] s1, s2;
}