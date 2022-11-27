#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}
// Not Completed
bool PermutationInString(string str1, string str2) {
    string reverseString = str2;
    reverse(reverseString.begin(), reverseString.end());

    if((str2.find(str1) < str2.length()) || (reverseString.find(str1) < reverseString.length())) {
        cout << "\nFound the Permutation in String..." << endl;
        return true;
    }
    cout << "\nNot Found the Permutation in String..." << endl;
    return false;
}

int main() {

    string str1 = "abc", str2 = "bbbca";

    bool stringPermutation = PermutationInString(str1, str2);

    return 0;
}