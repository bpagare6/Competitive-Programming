/*
    Problem: https://www.hackerrank.com/challenges/sock-merchant/problem
    
    Author: Bhushan Pagare

    Sample Input:
    9
    10 20 20 10 10 30 50 10 20

    Sample Output:
    3
*/

#include <bits/stdc++.h>
using namespace std;

void simple_array_sum(int n) {
    map<int, int> socks;
    int sock;
    for (int i = 0; i < n; ++i) {
        cin >> sock;
        socks[sock]++;
    }
    int pairs = 0;
    for (auto s: socks) {
        pairs += s.second / 2;
    }
    cout << pairs << "\n";
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