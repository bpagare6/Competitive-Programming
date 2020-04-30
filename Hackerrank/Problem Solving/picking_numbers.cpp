/*
    Problem: https://www.hackerrank.com/challenges/picking-numbers/problem
    
    Author: Bhushan Pagare

    Sample Input:
    6
    4 6 5 3 3 1

    Sample Output:
    3
*/

#include <bits/stdc++.h>
using namespace std;

void picking_numbers(int n) {
    vector<int> numbers(100, 0);
    int element;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        numbers[element]++;
    }
    int max_array_sum = 0;
    int sum;
    for (int i = 0; i < n; i++) {
        int first = i;
        int second = i + 1;
        sum = numbers[first] + numbers[second];
        if (sum > max_array_sum)
            max_array_sum = sum;
    }
    cout << max_array_sum << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    picking_numbers(n);

    return 0;
}