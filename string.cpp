#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "String";
    int len = s.size();
    s[len-2] = 'b';
    cout << s[len-2];
    // cout << s;

    return 0;
}