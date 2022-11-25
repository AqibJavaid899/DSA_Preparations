#include<iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

void moveZeroToEnd(int *arr, int size) {
    int fixedIndex = 0;
    
    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            swap(arr[fixedIndex], arr[i]);
            fixedIndex++;
        }
    }
}


int main() {

    int arr[6] = {0,1,4,0,3,0};

    int arr2[3] = {1,0,1};

    moveZeroToEnd(arr2, 3);

    printArray(arr2, 3);
    return 0;
}