#include<iostream>
#include<string>
using namespace std;

string RemoveAllAdjacentStringDuplicates(string str) {
    string finalStr = "";
    int index = 0;

    for(int i = 0; i < str.length(); i++) {
        char current_character = char(str[i]);
        if(index > 0 && current_character == finalStr[index-1]) {
            finalStr.pop_back();
            index--;
        } else {
            finalStr.push_back(str[i]);
            index++;
        }
    }
    return finalStr;
}

int main() {
    string str = "azxxzy";

    string ans = RemoveAllAdjacentStringDuplicates(str);

    cout << "\nFinal String is : " << ans << endl;


    return 0;
}