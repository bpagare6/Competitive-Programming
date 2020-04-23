/*
    Problem: https://www.hackerrank.com/challenges/strange-grid/problem
    
    Author: Bhushan Pagare

    Sample Input:
    6 3

    Sample Output:
    25
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_element(ll r, int c) {
    if (r % 2) {
        return ((r-1) * 5) + (2 * (c - 1));
    } else {
        return ((r-2) * 5) + (2 * (c - 1)) + 1;
    }
    return -1;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll r;
    int c;
    ll element;

    // Take input rows and column position
    cin >> r >> c;
    // Find the solution
    element = find_element(r, c);
    // Give the output
    cout << element << "\n";

    return 0;
}