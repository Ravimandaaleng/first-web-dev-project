#include <iostream>
using namespace std;

// Reverse function
void rev(int arr[], int l, int r) {
    r--; // To make r an index (not size)
    while (l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }

    // Print the reversed array
    for (int i = 0; i < l + r + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rev(arr, 0, n);  // Reverse the whole array

    return 0;
}
