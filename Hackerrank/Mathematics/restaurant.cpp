/*
    Problem: https://www.hackerrank.com/challenges/restaurant/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    2 2
    6 9

    Sample Output:
    1
    6
*/

#include <bits/stdc++.h>
using namespace std;

int find_max_squares(int m, int n) {
    int square_size;
    int minimum_dimension = min(m, n);
    for (int i=1; i<=minimum_dimension; ++i) {
        if (m % i ==0 && n % i == 0)
            square_size = i;
    }
    return (m / square_size) * (n / square_size);
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int m, n;
    int max_squares;

    for (int i=0; i<t; ++i) {
        // Take input bread size
        cin >> m >> n;
        // Find the solution
        max_squares = find_max_squares(m, n);
        // Give the output
        cout << max_squares << "\n";
    }

    return 0;
}