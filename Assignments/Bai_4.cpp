#include <iostream>
using namespace std;

int* reverseArray(int arr[], int size) {
    int* reversedArr = new int[size];
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - i - 1];
    }
    return reversedArr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int* reversedArr = reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << reversedArr[i] << " ";
    }
    cout << endl;

    delete[] reversedArr; 

    return 0;
}