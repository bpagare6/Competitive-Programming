/*
    Problem: https://www.hackerrank.com/challenges/best-divisor/problem
    
    Author: Bhushan Pagare

    Sample Input:
    12

    Sample Output:
    6
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_sum(ll number) {
    ll sum = 0;
    while (number > 0) {
        sum += (number % 10);
        number /= 10;
    }
    return sum;
}

ll checkbest(ll m, ll n) {
    ll sum_m = find_sum(m);
    ll sum_n = find_sum(n);
    if (sum_m == sum_n)
        return m>n?n:m;
    else
        return sum_m>sum_n?m:n;
}

ll find_best_divisor(ll number) {
    ll best = 0;
    for (ll i=1; i<=number; i++) {
        if (number % i == 0) {
            best = checkbest(best, i);
        }
    }
    return best;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll number;
    cin >> number;
    ll best_divisor = find_best_divisor(number);
    cout << best_divisor << "\n";

    return 0;
}