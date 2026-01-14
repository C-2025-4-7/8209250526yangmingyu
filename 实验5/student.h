#include<iostream>
using namespace std;
class Student     
{
public:                   
	void display();
	void set_value(int n, const char* nan, char s);
private:
	int num;
	char name[20];
	char sex;
};