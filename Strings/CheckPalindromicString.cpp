#include<iostream>
#include<string>
using namespace std;

void printArray(string arr) {
    for (int i = 0; i < arr.length(); i++) {
        cout << arr[i] << "  ";
    }
}

bool checkAlphabet(char ch) {
    if((tolower(ch) >= 'a' && tolower(ch) <= 'z') || (ch >= '0' && ch <= '9')) {
        return true;
    }
    return false;
}

string removeExtraCharacters(string str) {
    string s = "";

    for(int i = 0; i < str.length(); i++) {
        if(checkAlphabet(str[i])) {
            s.push_back(tolower(str[i]));
        }
    }
    return s;
}

string checkPalindrome(string str) {
    string cleanString = removeExtraCharacters(str);

    int start = 0;
    int end = cleanString.length()-1;

    while (start < end) {
        if(cleanString[start] != cleanString[end]) {
            return "false";
        }
        start++;
        end--;
    }
    return "true";
}

int main() {
    string str = "c1 O$d@eeD o1c";

    string ans = checkPalindrome(str);

    cout << "\nPalindromic Status of String is : " <<  ans << endl;


    return 0;
}