#include<iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

int* RotateArrays(int *arr, int size) {
    int* temp = new int[size];
    int steps = 2;

    for (int i = 0; i < size; i++) {
        temp[(i+ steps)%size] = arr[i];
    }
    return temp;
}

int main() {

    int arr[5] = {11, 12, 13, 14, 15};

    int *ptr = RotateArrays(arr, 5);

    cout << endl << endl;
    printArray(ptr, 5);

    return 0;
}