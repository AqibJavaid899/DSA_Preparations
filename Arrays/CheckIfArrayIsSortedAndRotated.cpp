#include<iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

bool CheckIfArrayIsSortedAndRotated(int *arr, int size) {
    int numberOfPairs = 0;

    for(int i = 1; i < size; i++) {
        int prevValue = arr[i-1];
        if(prevValue > arr[i]) {
            numberOfPairs++;
        }
    }
    // Comparing last and first value of the array
    if(arr[size-1] > arr[0]) {
        numberOfPairs++;
    }

    return numberOfPairs <= 1;
}

int main() {

    int arr[5] = {4,5,1,2,312};
    bool answer = CheckIfArrayIsSortedAndRotated(arr, 5);

    cout << "\nStatus of the array being Rotated and Sorted is : " << answer << endl;
    return 0;
}