#include <iostream>
using namespace std;

int main() {
    int size, target;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[100];
    cout << "Enter the sorted elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> target;

    int left = 0, right = size - 1, mid;
    bool found = false;

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}
