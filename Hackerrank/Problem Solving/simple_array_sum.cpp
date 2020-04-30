/*
    Problem: https://www.hackerrank.com/challenges/simple-array-sum/problem
    
    Author: Bhushan Pagare

    Sample Input:
    6
    1 2 3 4 10 11

    Sample Output:
    31
*/

#include <bits/stdc++.h>
using namespace std;

void simple_array_sum(int n) {
    int sum = 0;
    int element;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        sum += element;
    }
    cout << sum << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    simple_array_sum(n);

    return 0;
}