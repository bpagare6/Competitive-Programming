/*
    Problem: https://www.hackerrank.com/challenges/identify-smith-numbers/problem
    
    Author: Bhushan Pagare

    Sample Input:
    378

    Sample Output:
    1
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void check_smith_number(ll n) {
    // Find all prime factors
    ll number = n; 
    vector<ll> fact;
    for(ll i = 2 ; i*i <= number ; i++){
        while (number%i == 0) {
            number /= i;
            fact.push_back(i);
        }
    }
    if (number > 2)
        fact.push_back(number);

    // Find sum of all digits of prime factors
    ll sum_factors = 0;
    for(ll i : fact) {
        while (i > 0) {
            sum_factors += i % 10;
            i /= 10;
        }
    }
    // Find sum of all digits of n
    ll sum_n = 0;
    while (n > 0) {
        sum_n += n % 10;
        n /= 10;
    }

    if (sum_factors == sum_n)
        cout << "1\n";
    else
        cout << "0\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    // Find the solution
    check_smith_number(n);

    return 0;
}