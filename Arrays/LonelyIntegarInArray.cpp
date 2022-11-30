#include<iostream>
#include<vector>
using namespace std;

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

int LonelyInteger(int* a, int size) {
    int answer = a[0];

    for(int i = 1; i < size; i++) {
        answer ^= a[i];
    }
    cout << "\n\nUnqiue Value is : " << answer << endl;
    return answer;
}

int main() {
    int arr[9] = {1,2,3,4 ,4,6,3,2,1};

    LonelyInteger(arr, 9);

    return 0;
}