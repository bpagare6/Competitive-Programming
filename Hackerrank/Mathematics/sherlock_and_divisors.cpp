/*
    Problem: https://www.hackerrank.com/challenges/sherlock-and-divisors/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    9
    8

    Sample Output:
    0
    3
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_num_even_divisors(ll n) {
    ll num_divisors = 0;
    if (n % 2 == 0) {
        for (ll i=2; i<=sqrt(n); ++i) {
            if ((i % 2 == 0) && (n % i == 0))
                num_divisors += 1;
            if (((n/i) % 2 == 0) && (n % (n/i) == 0) && ((n/i) != i))
                num_divisors += 1;
        }
        num_divisors += 1;
    }
    return num_divisors; 
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll n, num_divisors;

    for (int i=0; i<t; ++i) {
        // Take input number
        cin >> n;
        // Find the solution
        num_divisors = find_num_even_divisors(n);
        // Give the output
        cout << num_divisors << "\n";
    }

    return 0;
}