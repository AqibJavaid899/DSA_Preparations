#include<iostream>
using namespace std;

int FindSquareRoot(int value) {
    int start = 0;
    int end = value;
    int mid = start+(end-start)/2;
    int ans = -1;

    while(start<=end) {
        if((mid*mid) > value) {
            end = mid-1;
        } else if((mid*mid) < value) {
            ans = mid;
            start = mid+1;
        } else {
            return mid;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

double FindPreciseSquareRoot(int root, int n, int precision) {
    double adderValue = 1;
    double temp = root;

    for (int i = 0; i < precision; i++) {
        adderValue = adderValue / 10;

        for(double k = temp; k*k < n; k = k + adderValue) {
            temp = k;
        }
    }
    cout << "\n\n\n\nTemp Root Value is : " << temp << endl;

    return temp;
}

int main() {

    int n = 89;
    int answer = FindSquareRoot(n);

    cout << "\nIntegar Sqrt of " << n << " is : " << answer << endl;

    FindPreciseSquareRoot(answer, n, 10);

    return 0;
}