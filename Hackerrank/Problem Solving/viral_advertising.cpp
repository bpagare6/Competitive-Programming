/*
    Problem: https://www.hackerrank.com/challenges/strange-advertising/problem

    Author: Bhushan Pagare

    Sample Input:
    3

    Sample Output:
    9
*/

#include <bits/stdc++.h>
using namespace std;

void viral_advertising(int n) {
    int shared = 5;
    int cumulative_likes = 0;
    for (int i = 0; i < n; ++i) {
        cumulative_likes += shared / 2;
        shared = (shared / 2) * 3;
    }
    cout << cumulative_likes << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    viral_advertising(n);

    return 0;
}