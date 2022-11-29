#include<iostream>
using namespace std;

int FindingPivotElement(int *arr, int size) {
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;

    while(s<e) {
        if(arr[mid] >= arr[0]) {
            s = mid+1;
        } else {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int main() {
    // Sorted and Rotated Array
    int arr[6] = {7,8,9,1,2,3};

    int pivotElement = FindingPivotElement(arr, 6);

    cout << "\n\nPivot Element is : " << pivotElement << endl;


    return 0;
}