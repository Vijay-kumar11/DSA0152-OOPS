#include <iostream>
using namespace std;
int main() {
    int num, t1 = 0, t2 = 1, a;
    cout << "Enter the number of terms: ";
    cin >> num;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= num; ++i) {
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        a = t1 + t2;
        t1 = t2;
        t2 = a;
        cout << a << " ";
    }
    cout << endl;
    return 0;
}

