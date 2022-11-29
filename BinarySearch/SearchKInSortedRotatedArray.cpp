#include<iostream>
using namespace std;

int FindingPivotElement(int *arr, int size) {
    int s = 0;
    int e = size;
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

int FindKUsingBS(int *arr, int s, int e, int key) {
    int mid = s+(e-s)/2;

    while(s<=e) {
        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] < key) {
            s = mid+1;
        } else {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int FindKInArray(int *arr, int size, int key) {
    int pivotElement = FindingPivotElement(arr, size);

    if(arr[pivotElement] <= key && key <= arr[size-1]) {
        return FindKUsingBS(arr, pivotElement, size-1, key);
    } else {
        return FindKUsingBS(arr, 0, pivotElement-1, key);
    }
}

int main() {

    int arr[5] = {7,8,1,3,5};

    int ansIndex = FindKInArray(arr, 5, 8);

    cout << "\n\nAnswer Index is : " << ansIndex << endl;

    return 0;
}