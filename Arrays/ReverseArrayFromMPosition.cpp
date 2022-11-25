#include<iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

void ReverseArrayFromMPosition(int *arr, int size, int m) {
    int start = m+1;
    int end = size-1;

    for (int i = start; start < end; i++) {
        swap(arr[start++], arr[end--]);        
    }
}

int main() {

    int oddArr[7] = {1,2,3,4,5,6,7};
    int evenArr[6] = {1,2,3,4,5,6};
    
    ReverseArrayFromMPosition(oddArr, 7, 2);
    printArray(oddArr, 7);

    cout << endl << endl;

    ReverseArrayFromMPosition(evenArr, 6, 2);
    printArray(evenArr, 6);

    return 0;
}