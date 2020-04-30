/*
    Problem: https://www.hackerrank.com/challenges/the-hurdle-race/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5 4
    1 6 3 5 2

    Sample Output:
    2
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void hurdle_race(int n, int k) {
    int bar_height;
    int max_doses = 0;
    for (int i = 0; i < n; ++i) {
        cin >> bar_height;
        if (bar_height > k)
            if (max_doses < (bar_height - k))
                max_doses = bar_height - k;
    }
    cout << max_doses << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    hurdle_race(n, k);

    return 0;
}