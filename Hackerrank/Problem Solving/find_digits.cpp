/*
    Problem: https://www.hackerrank.com/challenges/find-digits/problem

    Author: Bhushan Pagare

    Sample Input:
    2
    12
    1012

    Sample Output:
    2
    3
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void find_digits(ll n) {
    vector<int> digits;
    ll num = n;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    ll divisor_digits = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (digits[i] != 0 && ((n % digits[i]) == 0))
            divisor_digits += 1;
    }
    cout << divisor_digits << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll n;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        find_digits(n);
    }

    return 0;
}