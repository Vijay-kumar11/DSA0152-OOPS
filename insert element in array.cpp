#include <iostream>
using namespace std;

int main() {
    int n, pos, element;

    // Prompt user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n + 1]; // Create an array with one extra space for the new element

    // Input elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Prompt user for the position and the element to be inserted
    cout << "Enter the position where you want to insert the element: ";
    cin >> pos;
    cout << "Enter the element to be inserted: ";
    cin >> element;

    // Validate the position
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i >= pos; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = element;

    // Output the updated array
    cout << "Array after insertion: ";
    for (int i = 0; i <= n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

