#include<iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

int* squaresOfSortedArray(int *nums, int size) {
    int *sortedArray = new int[size];
    int startingIndex = 0;
    int endingIndex = size-1;

    for (int k = endingIndex; k >= 0; k--) {
        if(abs(nums[startingIndex]) < abs(nums[endingIndex])) {
            sortedArray[k] = nums[endingIndex] * nums[endingIndex];
            endingIndex--;
        } else {
            sortedArray[k] = nums[startingIndex] * nums[startingIndex];
            startingIndex++;
        }
    }
    return sortedArray;
}

int main() {

    int nums[7] = {-4,-2,-1,0,3,5,10};

    int *arrPtr = squaresOfSortedArray(nums, 7);

    printArray(arrPtr, 7);

    return 0;
}