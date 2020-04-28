/*
    Problem: https://www.hackerrank.com/challenges/pythagorean-triple/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5

    Sample Output:
    5 12 13

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve_triplet(ll a) {
    ll k;
    if (a % 2) {
        k = (a - 1) / 2;
        cout << a << " " << 2 * (k + 1) * k << " " << ((k + 1) * (k + 1)) + (k * k) << "\n";
    } else {
        k = a / 2;
        cout << a << " " << (k * k) - 1 << " " << (k * k) + 1 << "\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a;
    cin >> a;
    solve_triplet(a);

    return 0;
}