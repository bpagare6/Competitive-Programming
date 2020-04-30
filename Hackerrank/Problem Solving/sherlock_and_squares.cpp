/*
    Problem: https://www.hackerrank.com/challenges/sherlock-and-squares/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    3 9
    17 24

    Sample Output:
    2
    0
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sherlock_and_squares(ll a, ll b) {
    ll lower_limit = ceil(sqrt(a));
    ll upper_limit = sqrt(b);
    cout << upper_limit - lower_limit + 1 << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll a, b;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        sherlock_and_squares(a, b);
    }

    return 0;
}