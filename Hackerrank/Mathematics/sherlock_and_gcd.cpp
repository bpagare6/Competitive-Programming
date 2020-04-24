/*
    Problem: https://www.hackerrank.com/challenges/sherlock-and-gcd/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    3
    1 2 3
    2
    2 4
    3
    5 5 5

    Sample Output:
    YES
    NO
    NO
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return find_gcd(b, a%b);
}

void check_subset_possible() {
    int n;
    cin >> n;
    ll a;
    cin >> a;
    ll gcd = a;
    for (int i=0; i<n-1; ++i) {
        cin >> a;
        gcd = find_gcd(gcd, a);
    }
    if (gcd <= 1)
        cout << "YES\n";
    else
        cout << "NO\n"; 
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i=0; i<t; ++i) {
        // Find the solution
        check_subset_possible();
    }

    return 0;
}