#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> st) {
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

void InsertElementInCallStack(stack<int> &st, int element) {
    if(st.empty()) {
        st.push(element);
        return;
    }

    int topElement = st.top();
    st.pop();
    InsertElementInCallStack(st, element);
    st.push(topElement);
}

void ReverseStackInPlace(stack<int> &st) {
    if(st.empty()) {
        return;
    }

    int topElement = st.top();
    st.pop();
    ReverseStackInPlace(st);
    InsertElementInCallStack(st, topElement);
}

int main() {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "\nStack Before Reversal : " << endl;
    printStack(st);

    ReverseStackInPlace(st);

    cout << "\n\nStack After Reversal : " << endl;
    printStack(st);

    return 0;
}