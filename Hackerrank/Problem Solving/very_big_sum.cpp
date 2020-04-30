/*
    Problem: https://www.hackerrank.com/challenges/a-very-big-sum/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5
    1000000001 1000000002 1000000003 1000000004 1000000005

    Sample Output:
    5000000015
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void big_array_sum(int n) {
    ll sum = 0;
    ll element;
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
    big_array_sum(n);

    return 0;
}