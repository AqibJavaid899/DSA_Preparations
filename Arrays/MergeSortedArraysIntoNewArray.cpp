#include<iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

void mergeSortedArrayIntoNewArray(int *arr1, int size1, int *arr2, int size2, int *arr3, int size3) {
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;

    while(index1 < size1 && index2 < size2) {
        if(arr1[index1] < arr2[index2]) {
            arr3[index3++] = arr1[index1++];
        } else {
            arr3[index3++] = arr2[index2++];
        }
    }
    while(index1 < size1) {
        arr3[index3++] = arr1[index1++];
    }

    while(index2 < size2) {
        arr3[index3++] = arr2[index2++];
    }
}


int main() {

    int arr1[12] = {1, 5, 8, 11, 20, 0, 0, 0, 0, 0, 0, 0};
    int arr2[7] = {-1, 4, 6, 7, 9, 12, 18};

    int arr3[12] = {0};

    mergeSortedArrayIntoNewArray(arr1, 5, arr2, 7, arr3, 12);

    cout << "\nPrinting the Merged Array : " << endl;
    printArray(arr3, 12);

    return 0;
}