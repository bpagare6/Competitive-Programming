/*
    Problem: https://www.hackerrank.com/challenges/number-groups/problem

    Author: Bhushan Pagare

    Sample Input:
    3

    Sample Output:
    27

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sum_group(ll k) {
    ll n1, n2;
    n1 = (k * k) + k - 1;
    n2 = ((k - 1) * (k - 1)) + k - 2;
    n1 += 1; n1 /= 2;
    n2 += 1; n2 /= 2;
    return (n1 * n1) - (n2 * n2);
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k;
    cin >> k;
    ll sum = sum_group(k);
    cout << sum << "\n";

    return 0;
}