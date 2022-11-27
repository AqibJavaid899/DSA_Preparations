#include<iostream>
using namespace std;

// Naive Solution
int SumOfSubArrayMinimums(int *arr, int size) {
    int min = 0;
    int sum = 0;
    // outer loop
    for(int i = 0; i < size; i++) {
        // inner loop
        min = arr[i];
        for(int j = i; j < size; j++) {
            if(min > arr[j]) {
                min = arr[j];
            }
            sum += min; 
        }
    }
    return sum;
}

int main() {

    int arr[5] = {11,81,94,43,3};

    // Naive Solution 
    int minSum = SumOfSubArrayMinimums(arr, 5);

    cout << "\nMinimum of Sub Array is : " << minSum << endl << endl;

    return 0;
}