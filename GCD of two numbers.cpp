#include <iostream>
using namespace std;
int gcd(int a, int b) {
	 while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
     }
    return a;
} 
int main() {
    int n1, n2;
    cout << "Num 1 = ";
    cin >> n1;
    cout << "Num 2 = ";
    cin >> n2;
    cout << "GCD of two numbers is = " << gcd(n1, n2);
}
