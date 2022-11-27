#include<iostream>
#include<string>
using namespace std;


int StringCommpression(char *chars, int size) {
    
    int ansCount = 0;
    int index = 0;

    string str = "";

    while(index < size) {
        int nextIndex = index+1;

        while(nextIndex < size && chars[index] == chars[nextIndex]) {
            nextIndex++;
        }

        // Storing the Character
        chars[ansCount++] = chars[index];
        str.push_back(chars[index]);

        int totalCount = nextIndex - index;

        if(totalCount > 1) {
            string numToStr = to_string(totalCount);
            for(char ch : numToStr) {
                chars[ansCount++] = ch;
                str.push_back(ch);
            }
        }
        index = nextIndex;
    }
    cout << "\nString Value is : " << str << endl;
    return ansCount;
}


int main() {
    char ch [12] = {'a','a','b','b','b','b','b','b', 'b', 'b', 'c', 'c'};

    int answer = StringCommpression(ch, 12);

    cout << "\nTotal Size of Compressed String is : " << answer << endl;

    return 0;
}