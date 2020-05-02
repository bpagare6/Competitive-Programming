/*
    Problem: https://www.hackerrank.com/challenges/bon-appetit/problem
    
    Author: Bhushan Pagare

    Sample Input:
    4 1
    3 10 2 9
    12

    Sample Output:
    5
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void bon_appetit(int n, int k) {
    ll sum = 0;
    int cost;
    for (int i = 0; i < n; ++i) {
        cin >> cost;
        sum += cost;
        if (i == k)
            sum -= cost;
    }
    sum /= 2;
    int anna_pay;
    cin >> anna_pay;
    if (anna_pay - sum)
        cout << anna_pay - sum << "\n";
    else
        cout << "Bon Appetit\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    bon_appetit(n, k);

    return 0;
}