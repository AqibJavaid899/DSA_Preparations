// Binary Search Algorithm

#include <iostream>
using namespace std;

int BinarySearchAlgo(int arr[], int size, int key) {
    int start = 0;
    int end = size -1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (key == arr[mid]) {
            return mid;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}


int main() {
    int oddArr[7] = {3,6,12,33,43,55,60};
    int evenArr[6] = {1,5,10,12,15,19};

    int oddIndex = BinarySearchAlgo(oddArr, 7, 60);
    int evenIndex = BinarySearchAlgo(evenArr, 6, 12);

    cout << "Odd Index is : " << oddIndex << endl;
    cout << "Even Index is : " << evenIndex << endl;

    return 0;
}