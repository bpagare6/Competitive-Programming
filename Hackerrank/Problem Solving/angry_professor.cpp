/*
    Problem: https://www.hackerrank.com/challenges/angry-professor/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    4 3
    -1 -3 4 2
    4 2
    0 -1 2 1

    Sample Output:
    YES
    NO
*/

#include <bits/stdc++.h>
using namespace std;

void angry_professor(int n, int k) {
    int student_attending = 0;
    int arrival;
    for (int i = 0; i < n; ++i) {
        cin >> arrival;
        if (arrival <= 0)
            student_attending += 1;
    }
    if (student_attending >= k)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n >> k;
        angry_professor(n, k);
    }

    return 0;
}