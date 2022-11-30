#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "  ";
    }
}

void miniMaxSum(vector<int> arr) {
    long minSum = 0;
    long maxSum = 0;
    int count1 = 0;
    int count2 = 0;
    
    long max = *max_element(arr.begin(), arr.end());
    long min = *min_element(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size(); i++) {
        if(count1 == 1 || arr[i]!=max) maxSum+=arr[i];
        else count1 = 1;

        if(count2 == 1 || arr[i]!=min) minSum+=arr[i];
        else count2 = 1;
        }    
        cout << "\n\nMin Max Values are : " << maxSum << " " << minSum << endl;
}

int main() {
    vector<int> arr(5);

    for (int i = 0; i <= 5; i++) {
        arr[i] = i+1;
    }
    cout << "\nVector Values are :   ";

    printArray(arr);

    miniMaxSum(arr);

    return 0;
}