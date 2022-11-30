#include<iostream>
using namespace std;

bool isPossibleSolution(int *arr, int mid, int size, int num) {
    int dividerCount = 1;
    int counter = 0;
    for(int i = 0; i < size; i++) {
        if(counter + arr[i] <= mid) {
            counter += arr[i];
        } else {
            dividerCount++;

            if(dividerCount > num || arr[i] > mid) {
                return false;
            }
            counter = arr[i];
        }
    }
    return true;
}

int BookAllocationAlgo(int* arr, int size, int num) {
    int sum = 0;

    // Finding sum of the array to set the maximum value of the Search Space
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "\n\nSum is : " << sum << endl;

    int start = 0;
    int end = sum;
    int mid = start+(end-start)/2;

    int ans = -1;

    while(start<=end) {

        if(isPossibleSolution(arr, mid, size, num)) {
            ans = mid;
            cout << "\n\nAllowed Mid value is : " << mid << endl;
            end = mid-1;
        } else {
            start = mid + 1;
        }
        mid = start+(end-start)/2;
    }
    return ans;

}

int main() {

    int arr[5] = {1,2,2,3,1};

    int size = 5;
    int num = 3;
    int answer = BookAllocationAlgo(arr, size, num);

    cout << "\n\nMin of Max Value is : " << answer << endl;

    return 0;
}