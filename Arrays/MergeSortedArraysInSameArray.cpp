#include<iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

void mergeSortedArrayInSameArray(int *arr1, int size1, int *arr2, int size2) {

    int pointer1 = size1-1;
    int pointer2 = size2-1;
    int pointer3 = (size1+size2)-1;

    while(pointer2 >=0) {
        if(pointer1 >=0 && arr1[pointer1] > arr2[pointer2]) {
            arr1[pointer3--] = arr1[pointer1--];
        } else {
            arr1[pointer3--] = arr2[pointer2--];
        }
    }
}

int main() {

    int arr1[6] = {1,2,3,0,0,0};
    int arr2[3] = {2,5,6};

    mergeSortedArrayInSameArray(arr1, 3, arr2, 3);

    cout << "\nPrinting the Merged Array : " << endl;
    printArray(arr1, 6);

    return 0;
}