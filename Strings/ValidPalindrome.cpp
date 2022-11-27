#include<iostream>
#include<string>
using namespace std;

string removeExtraChar(string s) {
    string str = "";
    for(int i = 0; i < s.length(); i++) {
        if((tolower(s[i]) >= 'a' && tolower(s[i] <= 'z')) || (s[i] >= '0' && s[i] <= '9')) {
            str.push_back(tolower(s[i]));
        }
    }
    return str;
}

string checkPalindromeString(string s) {
    string cleanString = removeExtraChar(s);
    cout << cleanString << endl;

    int start = 0;
    int end = cleanString.length() -1;

    while (start<=end) {
        if(cleanString[start] != cleanString[end]) {
            return "false";
        }
        start++;
        end--;
    }
    return "true";
}

int main() {

    string s = "A man, a plan, a canal: Panama";

    string isPalindrome = checkPalindromeString(s);

    cout << "Status is " << isPalindrome << endl;

    return 0;
}