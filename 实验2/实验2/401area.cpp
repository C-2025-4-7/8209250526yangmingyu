#include<iostream>
using namespace std;
int main() {
    double a, b, c, d, e, f, g, h, i, j;
    cout << "请输入10个数：" << endl;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    double q[10] = { a, b, c, d, e, f, g, h, i, j };
    double p[10] = { 0 };  
    int count = 0; 
    for (int x = 0; x < 10; x++) {
        bool found = false;
        for (int y = 0; y < count; y++) {
            if (q[x] == p[y]) {
                found = true;
                break;
            }
        }
        if (!found) {
            p[count] = q[x];
            count++;
        }
    }
    cout << "不同的数: ";
    for (int i = 0; i < count; i++) {
        cout << p[i] << "\t";
    }
    cout << endl;
    return 0;
}