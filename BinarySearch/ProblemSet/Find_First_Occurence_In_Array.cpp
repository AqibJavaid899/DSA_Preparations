#include<iostream>
using namespace std;

int FindFirstOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int occurrenceIndex = -1;

    while (start <= end) {
        if(key == arr[mid]) {
            occurrenceIndex = mid;
            end = mid - 1;
        } else if(key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return occurrenceIndex;
 }

 int FindLastOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int occurrenceIndex = -1;

    while (start <= end) {
        if(key == arr[mid]) {
            occurrenceIndex = mid;
            start = mid + 1;
        } else if(key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return occurrenceIndex;
 }

int main() {
    int arr[20] = {0,2,3,7,7,7,7,9,9,9,9,9,9,9,9,9,9,9,11,12};

    int firstOccurenceValue = FindFirstOccurrence(arr, 20, 9);
    int lastOccurenceValue = FindLastOccurrence(arr, 20, 9);

    cout << "First Occurence Value: " << firstOccurenceValue << endl;
    cout << "Last Occurence Value: " << lastOccurenceValue << endl;
    return 0;
}