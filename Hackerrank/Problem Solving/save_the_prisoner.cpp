/*
    Problem: https://www.hackerrank.com/challenges/save-the-prisoner/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    5 2 1
    5 2 2

    Sample Output:
    2
    3
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void save_the_prisoner(ll n, ll m, ll s) {
    m = m % n;
    ll prisoner = (s + m - 1) % n;
    if (prisoner == 0)
        cout << n << "\n";
    else
        cout << prisoner << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll n, m, s;

    for (int i = 0; i < t; ++i) {
        cin >> n >> m >> s;
        save_the_prisoner(n, m, s);
    }

    return 0;
}