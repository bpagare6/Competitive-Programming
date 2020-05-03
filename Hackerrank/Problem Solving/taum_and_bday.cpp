/*
    Problem: https://www.hackerrank.com/challenges/taum-and-bday/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5
    10 10
    1 1 1
    5 9
    2 3 4
    3 6
    9 1 1
    7 7
    4 2 1
    3 3
    1 9 2

    Sample Output:
    20
    37
    12
    35
    12
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void taum_and_bday_cost(ll b, ll w) {
    ll bc, wc, z;
    cin >> bc >> wc >> z;
    if (bc > wc) {
        if ((wc + z) < bc) {
            cout << ((wc + z) * b) + (wc * w) << "\n";
        } else {
            cout << (bc * b) + (wc * w) << "\n";
        }
    } else {
        if ((bc + z) < wc) {
            cout << ((bc + z) * w) + (bc * b) << "\n";
        } else {
            cout << (bc * b) + (wc * w) << "\n";
        }
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    ll b, w;
    for (int i = 0; i < t; ++i) {
        cin >> b >> w;
        taum_and_bday_cost(b, w);
    }

    return 0;
}