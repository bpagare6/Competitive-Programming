/*
    Problem: https://www.hackerrank.com/challenges/compare-the-triplets/problem
    
    Author: Bhushan Pagare

    Sample Input:
    17 28 30
    99 16 8

    Sample Output:
    2 1
*/

#include <bits/stdc++.h>
using namespace std;

void compare_triplets(int a0, int a1, int a2, int b0, int b1, int b2) {
    int alice = 0;
    int bob = 0;
    if (a0 > b0) alice++; else if (a0 < b0) bob++;
    if (a1 > b1) alice++; else if (a1 < b1) bob++;
    if (a2 > b2) alice++; else if (a2 < b2) bob++;
    cout << alice << " " << bob << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a0, a1, a2, b0, b1, b2;
    cin >> a0 >> a1 >> a2 >> b0 >> b1 >> b2;
    compare_triplets(a0, a1, a2, b0, b1, b2);

    return 0;
}