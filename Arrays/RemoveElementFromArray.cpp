#include<iostream>
using namespace std;



void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

int RemoveElement(int *arr, int size, int value) {

    int fixedIndex = 0;

    for (int i = 0; i < size; i++) {
        if(arr[i] != value) {
            swap(arr[fixedIndex], arr[i]);
            fixedIndex++;
        }
    }
    return fixedIndex;
}

int main() {

    int arr[8] = {0,1,2,2,3,0,4,2};
    int value = 2;

    int totalOccurences = RemoveElement(arr, 8, 2);

    printArray(arr, 8);

    cout << "\n\nTotal No of Occurences in Array without " << value << " is : " << totalOccurences << endl;
    return 0;
}