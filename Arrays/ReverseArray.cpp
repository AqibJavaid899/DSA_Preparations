#include<iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

void ReverseArray(int *arr, int size) {
    int start = 0;
    int end = size-1;

    for (int i = 0; start < end; i++) {
        swap(arr[start++], arr[end--]);        
    }
}

int main() {

    int oddArr[7] = {1,2,3,4,5,6,7};
    int evenArr[6] = {1,2,3,4,5,6};
    
    ReverseArray(oddArr, 7);
    printArray(oddArr, 7);

    cout << endl << endl;

    ReverseArray(evenArr, 6);
    printArray(evenArr, 6);

    return 0;
}