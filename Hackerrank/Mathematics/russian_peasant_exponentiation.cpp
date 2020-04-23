/*
    Problem: https://www.hackerrank.com/challenges/russian-peasant-exponentiation/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    2 0 9 1000
    0 1 5 10
    8 2 10 1000000000

    Sample Output:
    512 0
    0 1
    880332800 927506432
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> find_exponent(ll a, ll b, ll k, ll m) {
    vector<ll> exponent(2, 1);
    ll ba = a, bb = b;
    ll c = a, d = b, v = c;
    ll de = 0;
    while (k > 0) {
        if(k & 1) {
            if(de==0) {
                exponent[0] = c;
                exponent[1] = d;
                de = 1;
            } else {
                v = exponent[0];
                exponent[0] = ((exponent[0]*c) % m - (d*exponent[1]) % m +m) % m;
                exponent[1] = ((exponent[1]*c) % m + (d*v) % m +m) % m;
            }
        }
        k /= 2;
        v = c;
        c = ((c*c + m) % m - (d*d + m) % m + m) % m;
        d = (((2*v) % m * d) % m + m) % m;
    }
    return exponent;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll a, b, k, m;
    vector<ll> exponent;

    for (int i=0; i<n; ++i) {
        // Take input co-ordinates
        cin >> a >> b >> k >> m;
        // Find the solution
        exponent = find_exponent(a, b, k, m);
        cout << exponent[0] << " " << exponent[1] << "\n";
    }

    return 0;
}