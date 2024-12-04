#include<bits/stdc++.h>
using namespace std;

int main() {
    // for number
    // int, long , long long
    int x = 10;
    long x = 1566;
    long long x = 150000000;

    cin >> x;

    // float, double [for decimal]
    float x = 5.6;
    double y = 12.777;

    cin >> x;
    cin >> y;

    cout << x << "\n" << y;
    

    // string, get line
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2;

    string str;
    getline(cin, str);
    cout << str;

    return 0;
}