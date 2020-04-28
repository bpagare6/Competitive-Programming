/*
    Problem: https://www.hackerrank.com/challenges/simple-one/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    2 1 2
    5 6 7

    Sample Output:
    666666670
    237627959
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

inline ll add_mod(int x, int y) {
    return (ll) (x + y) % mod;
}

inline ll subtract_mod(int x, int y) {
    return (ll) (x - y + mod) % mod;
}

inline ll multiply_mod(ll x, ll y) {
    return (ll) x * y % mod;
}

ll pow_mod(ll base, ll exponent) {
    ll result = 1;
    while (exponent != 0) {
        if (exponent % 2 != 0) {
            result = multiply_mod(result, base);
        }

        base = multiply_mod(base, base);
        exponent /= 2;
    }
    return result;
}

inline ll inverse_mod(int x) {
    return pow_mod(x, mod - 2);
}

inline ll tan_add(int tanA, int tanB) {
    return multiply_mod(add_mod(tanA, tanB), inverse_mod(subtract_mod(1, multiply_mod(tanA, tanB))));
}

void solve(ll a, ll b, ll n) {
    ll base = multiply_mod(a, inverse_mod(b));
    ll result = 0;
    for (ll factor = n; factor != 0; factor /= 2) {
        if (factor % 2 != 0) {
            result = tan_add(result, base);
        }

        base = tan_add(base, base);
    }
    cout << result << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll a, b, n;

    for (int i=0; i<t; ++i) {
        // Take input
        cin >> a >> b >> n;
        // Find the solution
        solve(a, b, n);
    }

    return 0;
}