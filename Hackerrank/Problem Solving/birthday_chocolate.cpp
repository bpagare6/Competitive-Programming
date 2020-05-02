/*
    Problem: https://www.hackerrank.com/challenges/the-birthday-bar/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5
    1 2 1 3 2
    3 2

    Sample Output:
    2
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void birthday_chocolate(int n) {
    vector<int> bars;
    int chocolate;
    for (int i = 0; i < n; ++i) {
        cin >> chocolate;
        bars.push_back(chocolate);
    }
    int d, m;
    cin >> d >> m;
    vector<int> sum;
    sum.push_back(0);
    for (int i = 0; i < n; ++i) {
        sum.push_back(sum[i] + bars[i]);
    }
    int count = 0;
    for (int i = 0; i <= n - m; ++i) {
        if (sum[i + m] - sum[i] == d)
            count += 1;
    }
    cout << count << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    birthday_chocolate(n);

    return 0;
}