#include <iostream>
using namespace std;
int main() {
    int n = 5;          // 控制行数
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {          // 打印星号
            cout << "*";
        }
        cout << endl;               // 换行
    }
    return 0;
}