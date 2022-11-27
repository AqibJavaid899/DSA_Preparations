#include<iostream>
using namespace std;

void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

void ReverseAString(char *str, int length) {
    int start = 0;
    int end = length-1;

    while(start<=end) {
        swap(str[start++], str[end--]);
    }

}

int main() {

    char arr[5] = {'h', 'e', 'l', 'l', '0'};

    ReverseAString(arr, 5);

    printArray(arr, 5);

    return 0;
}