#include<iostream>
#include<string>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

char MaxOccuringCharacters(string str) {
    int occurenceArray[25] = {0};
    int value = 0;

    // Count the Occurence in the Array
    for(int i = 0; i < str.length(); i++) {
        value = str[i] - 'a';
        occurenceArray[value]++;
    }

    int max = -1;
    int index = 0;

    // Return the Most Occured Value
    for(int j = 0; j < 25; j++) {
        if(max < occurenceArray[j]) {
            max = occurenceArray[j];
            index = j;
        }
    }
    char ch = index + 'a';
    return ch;
}

int main() {

    string str = "output";

    char maxOccuringChar = MaxOccuringCharacters(str);

    cout << "\nMax Occuring Character is : " << maxOccuringChar << endl;

    return 0;
}