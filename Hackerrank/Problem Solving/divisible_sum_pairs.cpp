/*
    Problem: https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
    
    Author: Bhushan Pagare

    Sample Input:
    6 3
    1 3 2 6 1 2

    Sample Output:
    5
*/

#include <bits/stdc++.h>
using namespace std;

void divisible_sum_pairs(int n, int k) {
    vector<int> numbers;
    int num;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        numbers.push_back(num);
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((numbers[i] + numbers[j]) % k == 0)
                count++;
        }
    }
    cout << count << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    divisible_sum_pairs(n, k);

    return 0;
}