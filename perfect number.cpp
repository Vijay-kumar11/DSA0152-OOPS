#include <iostream>
using namespace std;
bool isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) sum += i;
    }
    return sum == num && num != 1;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPerfect(number)) {
        cout << number << " is a perfect number.\n";
    } else {
       cout << number << " is not a perfect number.\n";
    }

    return 0;
}
