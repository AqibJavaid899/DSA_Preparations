#include<iostream>
#include<string>
#include<stack>
using namespace std;

void printStack(stack<string> st) {
    while(!st.empty()) {
        cout << st.top() << " " << endl;
        st.pop();
    }
}

string ReverseWords(string str) {
    stack<string> st;

    for (int i = 0; i < str.length(); i++) {
        string tempStr = "";

        while(str[i] != ' ' && i < str.length()) {
            tempStr += str[i++];
        }
        st.push(tempStr);
    }

    str = "";
    while(!st.empty()) {
        string s = st.top();
        st.pop();
        str = str + s + " ";
    }
    return str;
}

int main() {

    string str = "Hey there, This is Me writing to you for help!";
    cout << "\nOriginal String is : " << str << endl;
    string reverseWordsString = ReverseWords(str);
    cout << "Reverse Strings is : " << reverseWordsString << endl;
    return 0;
}