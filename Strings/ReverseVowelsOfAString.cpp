#include<iostream>
#include<string>
using namespace std;

void printArray(string arr) {
    for (int i = 0; i < arr.length(); i++) {
        cout << arr[i] << "  ";
    }
}

bool checkVowel(char ch) {
    return (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u');
}

void reverseVowelsOfAString(string s) {
    int start = 0;
    int end = s.length()-1;

    while(start<=end) {
        if (checkVowel(s[start]) && checkVowel(s[end])) {
            swap(s[start++], s[end--]);
        }
        else if(!checkVowel(s[start])) {
            start++;
        } 
        else if (!checkVowel(s[end])) {
            end--;
        }
    }
    printArray(s);
}

int main() {

    string s = "Marge, let's \"went.\" I await news telegram.";
    reverseVowelsOfAString(s);
    return 0;
}