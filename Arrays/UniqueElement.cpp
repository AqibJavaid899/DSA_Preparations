#include<iostream>
using namespace std;

int FindUnique (int *arr, int size) {
    int ans = 0;

    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int array[7] = {2,3,1,6,3,6,2};
    int array2[5] = {1,3,4,1,3};
    int uniqueElement = FindUnique(array, 7);
    cout << "Unique Element is " << uniqueElement << endl;
    return 0;
}