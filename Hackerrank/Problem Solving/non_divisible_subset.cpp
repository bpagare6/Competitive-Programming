/*
    Problem: https://www.hackerrank.com/challenges/non-divisible-subset/problem
    
    Author: Bhushan Pagare

    Sample Input:
    4 3
    1 7 2 4

    Sample Output:
    3
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void non_divisible_subset(int n, int k) {
    vector<ll> numbers;
    ll element;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        numbers.push_back(element);
    }
    vector<int> counts(k, 0);
    for (int i = 0; i < n; ++i) {
        counts[numbers[i] % k]++;
    }
    int count = 0;
    if (k % 2 == 0)
        count++;
    count += min(counts[0], 1);
    for (int i = 1; i <= k / 2; ++i) {
        if (i != k - i)
            count += max(counts[i], counts[k - i]);
    }
    cout << count << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    non_divisible_subset(n, k);

    return 0;
}