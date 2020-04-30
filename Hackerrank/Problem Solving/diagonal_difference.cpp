/*
    Problem: https://www.hackerrank.com/challenges/diagonal-difference/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    11 2 4
    4 5 6
    10 8 -12

    Sample Output:
    15
*/

#include <bits/stdc++.h>
using namespace std;

void diagonal_difference(int n) {
    int sum_diagonal_1 = 0;
    int sum_diagonal_2 = 0;
    int element;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> element;
            if (i == j)
                sum_diagonal_1 += element;
            if (i + j == n - 1)
                sum_diagonal_2 += element;
        }
    }
    cout << abs(sum_diagonal_1 - sum_diagonal_2) << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    diagonal_difference(n);

    return 0;
}