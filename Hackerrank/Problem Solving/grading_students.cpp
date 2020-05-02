/*
    Problem: https://www.hackerrank.com/challenges/grading/problem

    Author: Bhushan Pagare

    Sample Input:
    4
    73
    67
    38
    33

    Sample Output:
    75
    67
    40
    33
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void find_grade(int n) {
    int nearest_grade = ceil(n / 5.0) * 5;
    if (n >= 38 && nearest_grade - n < 3)
        cout << nearest_grade << "\n";
    else
        cout << n << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        find_grade(n);
    }

    return 0;
}