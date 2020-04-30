/*
    Problem: https://www.hackerrank.com/challenges/permutation-equation/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3
    2 3 1

    Sample Output:
    2
    3
    1
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sequence_equation(int n) {
    vector<int> numbers;
    ll element;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        numbers.push_back(element);
    }
    vector<int> y;
    int i, j, k;
    for (i = 1; i <= n; ++i) {
        for (j = 0; j < n; ++j) {
            if (numbers[j] == i)
                break;
        }
        for (k = 0; k < n; ++k) {
            if (numbers[k] == j + 1) {
                cout << k + 1 << "\n";
                break;
            }
        }
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    sequence_equation(n);

    return 0;
}