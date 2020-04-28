/*
    Problem: https://www.hackerrank.com/challenges/sherlock-and-counting/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    5 1
    5 2

    Sample Output:
    2
    4
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool is_too_far(ll a, ll b, ll delta, ll x) {
    return ((ll) (x * 2 * a + b) * (x * 2 * a + b)) >= delta;
}

void find_number(ll n, ll k) {
    ll a = 1;
    ll b = -n;
    ll c = n * k;
    ll delta = b * b - 4 * a * c;
    if (delta <= 0)
        cout << n - 1 << "\n";
    else {
        ll exclusive_lower = floor((-b - sqrt(delta)) / (2 * a));
        ll exclusive_upper = floor((-b + sqrt(delta)) / (2 * a));
        while (is_too_far(a, b, delta, exclusive_lower)) {
            exclusive_lower++;
        }
        while(is_too_far(a, b, delta, exclusive_upper)) {
            exclusive_upper--;
        }
        cout << (n - 1) - (exclusive_upper - exclusive_lower + 1) << "\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll n, k;

    for (int i=0; i<t; ++i) {
        // Take input coordinates
        cin >> n >> k;
        // Find the solution
        find_number(n, k);
    }

    return 0;
}