/*
    Problem: https://www.hackerrank.com/challenges/filling-jars/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5 3
    1 2 100
    2 5 100
    3 4 100

    Sample Output:
    160
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_average_candies(ll n, ll m) {
    ll a, b, k;
    ll average_candies = 0;
    for (ll i=0; i<m; ++i) {
        cin >> a >> b >> k;
        average_candies += k * (b - a + 1);
    }
    return floor((average_candies * 1.0) / n);
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    ll average_candies;

    // Take input n and m
    cin >> n >> m;
    // Find the solution
    average_candies = find_average_candies(n, m);
    // Give the output
    cout << average_candies << "\n";

    return 0;
}