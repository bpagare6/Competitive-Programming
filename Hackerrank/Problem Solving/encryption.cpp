/*
    Problem: https://www.hackerrank.com/challenges/encryption/problem
    
    Author: Bhushan Pagare

    Sample Input:
    haveaniceday

    Sample Output:
    hae and via ecy
*/

#include <bits/stdc++.h>
using namespace std;

void encryption(string s) {
    int n = s.length();
    int row = round(sqrt(n));
    int column;
    if (row >= sqrt(n)) 
        column = row; 
    else 
        column = row + 1;
    for(int j = 0; j < column; ++j) {
        for(int i = j; i < n; i += column)
            cout << s[i];
        cout << ' ';
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
    encryption(s);

    return 0;
}