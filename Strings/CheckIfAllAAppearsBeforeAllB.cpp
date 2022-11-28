#include<iostream>
using namespace std;

bool CheckIfAllAAppearsBeforeAllB(string s) {
    int expectatedValue = 0;
    for (char ch : s) {

        if(ch == 'a') {
            if(expectatedValue == 1) {
                return false;
            }
            expectatedValue = 0;
        } else {
            expectatedValue = 1;
        }
    }

    return true;
}

int main() {

    string str = "bbb";
    bool answer = CheckIfAllAAppearsBeforeAllB(str);

    cout << "\nStatus of the Check Function is : " << answer << endl;

    return 0;
}