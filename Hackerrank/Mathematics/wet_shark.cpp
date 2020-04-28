/*
    Problem: https://www.hackerrank.com/challenges/wet-shark-and-42/problem

    Author: Bhushan Pagare

    Sample Input:
    2
    3
    4

    Sample Output:
    6
    8
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void find_steps(ll n) {
    ll steps = (n + (n - 1) / 20) * 2;
    cout << steps % (ll)(1e9+7) << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll s;

    for (int i = 0; i < t; ++i) {
        // Take the input strength
        cin >> s;
        // Find the solution
        find_steps(s);
    }

    return 0;
}