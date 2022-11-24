#include<iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

void swapAlternate(int *arr, int size) {

    for (int i = 0; i < size; i+=2) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }

 }

int main() {
    int oddArray[7] = {1,2,3,4,5,6,7};
    int evenArray[6] = {1,2,3,4,5,6};

    swapAlternate(oddArray, 7);
    printArray(oddArray, 7);

    cout << endl << endl;
    
    swapAlternate(evenArray, 6);
    printArray(evenArray, 6);
    
    return 0;
}