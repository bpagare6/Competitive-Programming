/*
    Problem: https://www.hackerrank.com/challenges/leonardo-and-prime/problem
    
    Author: Bhushan Pagare

    Sample Input:
    6
    1
    2
    3
    500
    5000
    10000000000

    Sample Output:
    0
    1
    1
    4
    5
    10
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int find_maximum_prime_factors(ll number) {
    // Primes list is find by given limit on input
    int primes[] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47};
    int maximum_prime_factors = 0;
    ll product_prime_factors = 1;
    for (int i=0; i<15; ++i) {
        product_prime_factors *= primes[i];
        if (product_prime_factors <= number)
            maximum_prime_factors += 1;
    }
    return maximum_prime_factors;
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    ll number;
    int maximum_prime_factors;

    for (int i=0; i<q; ++i) {
        // Take input number
        cin >> number;
        // Find the solution
        maximum_prime_factors = find_maximum_prime_factors(number);
        // Give the output
        cout << maximum_prime_factors << "\n";
    }

    return 0;
}