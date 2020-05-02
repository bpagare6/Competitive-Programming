/*
    Problem: https://www.hackerrank.com/challenges/electronics-shop/problem
    
    Author: Bhushan Pagare

    Sample Input:
    10 2 3
    3 1
    5 2 8

    Sample Output:
    9
*/

#include <bits/stdc++.h>
using namespace std;

void electronics_shop(int b, int n, int m) {
    vector<int> keyboard, drives;
    int price;
    for (int i = 0; i < n; ++i) {
        cin >> price;
        keyboard.push_back(price);
    }
    for (int i = 0; i < m; ++i) {
        cin >> price;
        drives.push_back(price);
    }
    int cost;
    int max_cost = 0;
    for (int i = 0; i < (int)keyboard.size(); ++i) {
        for (int j = 0; j < (int)drives.size(); ++j) {
            cost = keyboard[i] + drives[j];
            if (cost > max_cost && cost <= b) {
                max_cost = cost;
            }
        }
    }
    if (max_cost)
        cout << max_cost << "\n";
    else
        cout << "-1\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b, n, m;
    cin >> b >> n >> m;
    electronics_shop(b, n, m);

    return 0;
}