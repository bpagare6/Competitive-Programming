/*
    Problem: https://www.hackerrank.com/challenges/random-number-generator/forum
    
    Author: Bhushan Pagare

    Sample Input:
    3
    1 1 1
    1 1 2
    1 1 3

    Sample Output:
    1/2
    1/1
    1/1

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

ll gcd(ll a, ll b) { 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

void find_probability(ll a, ll b, ll c) {
    if (a + b <= c)
        cout << "1/1\n";
    else {
        ll numerator, denominator;
        denominator = 2 * a * b;
        if (a >= c && b >= c) {
            numerator = c * c;
        } else if (a <= c && b <= c) {
            numerator = (2 * a * b) - ((a + b - c) * (a + b - c));
        } else {
            numerator = (c * c) - ((c - min(a, b)) * (c - min(a, b)));
        }
        ll common_factor = gcd(numerator, denominator);
        cout << (ll)numerator/common_factor << "/" << (ll)denominator/common_factor << "\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll a, b, c;

    for (int i=0; i<t; ++i) {
        // Take input numbers
        cin >> a >> b >> c;
        // Find the solution
        find_probability(a, b, c);
    }

    return 0;
}