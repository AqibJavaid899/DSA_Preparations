#include<iostream>
using namespace std;

int FindingPeakIndex(int* arr, int size) {
    int s = 0;
    int e = size;
    int mid = s+(e-s)/2;

    while(s<e) {
        if(arr[mid] < arr[mid+1]) {
            s = mid+1;
        } else {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;

}

int main() {

    int arr[7] = {1,2,1,3,5,6,4};
    int arr1[4] = {1,2,3,1};

    int answer = FindingPeakIndex(arr1, 4);

    cout << "\n\nPeak Index is : " << answer << endl;

    return 0;
}