/*
    Problem: https://www.hackerrank.com/challenges/repeated-string/problem
    
    Author: Bhushan Pagare

    Sample Input:
    aba
    10

    Sample Output:
    7
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void repeated_string(string s, ll n) {
    int l = s.length();
    ll initial_a_count = 0;
    for (int i = 0; i < l; ++i) {
        if (s[i] == 'a')
            initial_a_count++;
    }
    initial_a_count *= (n / l);
    n = n % l;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a')
            initial_a_count++;
    }
    cout << initial_a_count << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    ll n;
    cin >> word >> n;
    repeated_string(word, n);

    return 0;
}