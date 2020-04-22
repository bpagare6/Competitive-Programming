/*
    Problem: https://www.hackerrank.com/challenges/p1-paper-cutting/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3 1

    Sample Output:
    2
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_minimum_cuts(ll n, ll m) {
    return (m-1) + m*(n-1);
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    ll min_cuts;

    // Take input paper dimensions
    cin >> n >> m;
    // Find the solution
    min_cuts = find_minimum_cuts(n, m);
    // Give the output
    cout << min_cuts << "\n";

    return 0;
}