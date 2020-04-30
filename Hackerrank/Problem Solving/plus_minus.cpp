/*
    Problem: https://www.hackerrank.com/challenges/plus-minus/problem
    
    Author: Bhushan Pagare

    Sample Input:
    6
    -4 3 -9 0 4 1

    Sample Output:
    0.500000
    0.333333
    0.166667
*/

#include <bits/stdc++.h>
using namespace std;

void plus_minus(int n) {
    double positive = 0;
    double negative = 0;
    double zeros = 0;
    int element;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        if (element > 0)
            positive++;
        else if (element < 0)
            negative++;
        else
            zeros++;
    }
    cout << setprecision(6) 
         << positive / n << "\n"
         << negative / n << "\n"
         << zeros / n << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    plus_minus(n);

    return 0;
}