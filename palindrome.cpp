#include<iostream>
using namespace std;
int main() {
    int n, original, rev = 0;
    cout << "Enter the number: ";
    cin >> n;
    original = n; 

    while (n!=0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (original == rev) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}

