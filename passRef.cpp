// pass by reference

#include<bits/stdc++.h>
using namespace std;

// void doSomething(string &s) {
//     s[0] = 'c';
//     cout << s << endl;
// }

// int main() {
//     string s = "Batman";
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }

// int main() {
//     int arr[5];

//     for(int i=0; i<=4; i =i + 1){
//         cin >> arr[i];
//     }

//     for(int i=0; i<=4; i = i + 1){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl; 
}

int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i<n; i = i + 1){
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}