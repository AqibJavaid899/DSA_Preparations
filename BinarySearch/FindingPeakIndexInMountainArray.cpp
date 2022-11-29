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

    int arr[6] = {1,2,4,5,3,0};

    int answer = FindingPeakIndex(arr, 6);

    cout << "\n\nPeak Index is : " << answer << endl;

    return 0;
}