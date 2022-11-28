#include<iostream>
#include<string>
#include <vector>
using namespace std;

void printArray(vector<int> arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

vector<int> SumOfTwoArrays(int *arr1, int size1, int *arr2, int size2) {

    // Convert array elements to a Value
    string str1 = "";
    string str2 = "";
    for (int i = 0; i < size1; i++) {
        str1 = str1 + to_string(arr1[i]);
    }
    for (int i = 0; i < size2; i++) {
        str2 = str2 + to_string(arr2[i]);
    }
    cout << "String 1 is : " << str1 << " and String 2 is : " << str2 << endl;
    int sum = stoi(str1) + stoi(str2);

    int len = to_string(sum).length();

    cout << "\nSum is : " << sum << " and Length is : " << len << endl;

    vector<int> intArr(len);
    int index = 0;

    for(char ch : to_string(sum)) {

        intArr[index++] = ch - '0';
    }

    return intArr;
}

int main() {

    int arr1[3] = {4, 5, 1};
    int arr2[2] = {9, 9};

    vector<int> ptr = SumOfTwoArrays(arr1, 3, arr2, 2);


    printArray(ptr, ptr.size());

    return 0;
}