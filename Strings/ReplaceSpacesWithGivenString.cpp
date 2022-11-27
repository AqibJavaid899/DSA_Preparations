#include<iostream>
#include<string>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

// Creating a New String and Replace All Spaces with the (Replacer)
string ReplaceSpacesWithGivenString(string str) {

    string tempStr = "";

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            tempStr.push_back('@');
            tempStr.push_back('4');
            tempStr.push_back('0');

        } else {
            tempStr.push_back(str[i]);
        }
    }
    return tempStr;
}

// Replace All Spaces with the Replacer (In-Place Solution)
void ReplaceSpacesWithGivenStringInPlace(string &str) {

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            str.replace(i, 1, "@40");
        }
    }

    cout << "\n\nModified String is : " << str << endl;
}

int main() {

    string str = "Coding Ninjas Is A Coding Platform";

    string modifiedString = ReplaceSpacesWithGivenString(str);

    ReplaceSpacesWithGivenStringInPlace(str);


    cout << "\n\nModified String is : " << modifiedString << endl;

    return 0;
}