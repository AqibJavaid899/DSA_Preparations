#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

bool CheckIsNumber(char ch) {
    return ch >= '0' && ch <= '9';
}

bool areNumbersAscending(string s) {
    vector<int> intArray;

    for(int i = 0; i < s.length(); i++) {
        string tempStr = "";
        if(CheckIsNumber(s[i])) {
            tempStr += s[i];
            int j = i+1;
            while(CheckIsNumber(s[j])) {
                tempStr += s[j++];
            }
            cout << "\nNumber String is : " << tempStr << endl;
            intArray.push_back(stoi(tempStr));
            i = j;
        }
    }

    // Checking the Ascending Order
    for(int i = 1; i < intArray.size(); i++) {
        if(intArray[i-1] >= intArray[i]) {
            return false;
        }
    }

    return true;
}

int main() {

    string s = "hello world 5 x 5";

    bool ans = areNumbersAscending(s);

    cout << "\n\nStatus of the Ascending Order Numbers is : " << ans << endl;

    return 0;
}