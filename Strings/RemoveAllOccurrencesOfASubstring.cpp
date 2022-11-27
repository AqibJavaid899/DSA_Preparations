#include<iostream>
#include<string>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

string RemoveAllOccurencesOfAStr(string str, string part) {
    while(str.length() != 0 && str.find(part) < str.length()) {
        str.erase(str.find(part), part.length());
    }
    return str;
}

int main() {

    string str = "daabcbaabcbc";

    string modifiedString = RemoveAllOccurencesOfAStr(str, "abc");

    cout << "\n\nModified String is : " << modifiedString << endl;

    return 0;
}