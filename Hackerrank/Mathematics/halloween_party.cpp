/*
    Problem: https://www.hackerrank.com/challenges/halloween-party/problem
    
    Author: Bhushan Pagare

    Sample Input:
    4
    5
    6
    7
    8

    Sample Output:
    6
    9
    12
    16
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_max_pieces(ll k) {
    return (k/2) * (k - (k/2));   
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll k;
    ll max_pieces;

    for (int i=0; i<t; ++i) {
        // Take input bread size
        cin >> k;
        // Find the solution
        max_pieces = find_max_pieces(k);
        // Give the output
        cout << max_pieces << "\n";
    }

    return 0;
}