#include<iostream>
using namespace std;

int FindFirstOccurence(int *arr, int size, int key) {
        int start = 0;
        int end = size;
        int mid = start+(end-start)/2;
        int index = -1;

        while(start<end) {
            if(arr[mid] == key) {
                end = mid;
                index = mid;
            } else if(arr[mid] < key) {
                start = mid+1;
            } else {
                end = mid;
            }
            mid = start+(end-start)/2;
        }
        return index;
}

int FindLastOccurence(int *arr, int size, int key) {
        int start = 0;
        int end = size;
        int mid = start+(end-start)/2;
        int index = -1;

        while(start<end) {
            if(arr[mid] == key) {
                start = mid+1;
                index = mid;
            } else if(arr[mid] < key) {
                start = mid+1;
            } else {
                end = mid;
            }
            mid = start+(end-start)/2;
        }
        return index;
}

pair<int,int> firstAndLastOccurence(int *arr, int size, int key) {

    pair<int, int> answer;
    answer.first = FindFirstOccurence(arr, size, key);
    answer.second = FindLastOccurence(arr, size, key);
    return answer;
}

int main() {

    int arr[8] = {0,0,1,1,2,2,2,2};

    pair<int,int> p = firstAndLastOccurence(arr, 8, 1);

    cout << "\n\nFirst Occurence is : " << p.first << " and Last Occurence is : " << p.second << endl;

    return 0;
}