#include<iostream>
#include<string>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

bool CheckNumber(char ch) {
    return ch >= '0' && ch <= '9';
}

// Not Complete
int StringToIntegar(string str) {

    string stringNum = "";
    int isPositive = 1;
    int index = -1;

    for(char ch : str) {
        if(CheckNumber(ch)) {
            stringNum.push_back(ch);
            index = 0;
        } else if(ch == '-') {
            isPositive = 0;
        } else if (ch != ' ' && index == -1) {
            return 0;
        }
    }

    int number = stoi(stringNum);
    if(!isPositive) {
        number *= -1;
    }

    // cout << "\n\nNumber is : " << number << endl;
    return number;
}

int main() {

    string str = "-91283472332";

    int num = StringToIntegar(str);

    cout << "\n\nReturn Number is : " << num << endl;

    return 0;

}