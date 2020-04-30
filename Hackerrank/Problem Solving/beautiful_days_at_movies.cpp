/*
    Problem: https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
    
    Author: Bhushan Pagare

    Sample Input:
    20 23 6

    Sample Output:
    2
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll reverse_number(ll n) {
    ll reverse = 0;
    while (n > 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }
    return reverse;
}

void beautiful_days(ll i, ll j, ll k) {
    int beautiful_days = 0; 
    for (ll z = i; z <= j; ++z) {
        if (abs(z - reverse_number(z)) % k == 0)
            beautiful_days += 1;
    }
    cout << beautiful_days << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll i, j, k;
    cin >> i >> j >> k;
    beautiful_days(i, j, k);

    return 0;
}