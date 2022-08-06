#include <iostream>
using namespace std;

int findPeakIndexInMountainArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end) {
        if(arr[mid] < arr[mid+1]) {
            start = mid + 1;
        } else if(arr[mid] > arr[mid+1]) {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main() {
    int arr[10] = {3,5,7,12,13,33,14,10,4,1};

    int peakIndexInMountainArray = findPeakIndexInMountainArray(arr, 10);
    cout << "Peak index: " << peakIndexInMountainArray << endl;
    return 0;   
}