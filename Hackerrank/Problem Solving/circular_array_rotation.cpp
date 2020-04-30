/*
    Problem: https://www.hackerrank.com/challenges/circular-array-rotation/problem
    
    Author: Bhushan Pagare

    Sample Input:
    3 2 3
    1 2 3
    0
    1
    2

    Sample Output:
    2
    3
    1
*/

#include <bits/stdc++.h>
using namespace std;

void circular_array_rotation(int n, int k, int q) {
    vector<int> numbers;
    int element;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        numbers.push_back(element);
    }
    k = k % n;
    int query;
    for (int i = 0; i < q; ++i) {
        cin >> query;
        cout << numbers[(query - k + n) % n] << "\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;
    circular_array_rotation(n, k, q);
    
    return 0;
}