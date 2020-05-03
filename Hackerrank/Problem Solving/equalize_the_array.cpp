/*
    Problem: https://www.hackerrank.com/challenges/equality-in-a-array/problem
    
    Author: Bhushan Pagare

    Sample Input:
    5
    3 3 2 1 3

    Sample Output:
    2
*/

#include <bits/stdc++.h>
using namespace std;

void equalize_array(int n) {
    map<int, int> numbers;
    int num;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        numbers[num]++;
    }
    int max_occurences = 0;
    int key = 0;
    for (auto num: numbers) {
        if (num.second > max_occurences) {
            max_occurences = num.second;
            key = num.first;
        }
    }
    int min_delete = 0;
    for (auto num: numbers) {
        if (num.first != key)
            min_delete += num.second;
    }
    cout << min_delete << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    equalize_array(n);

    return 0;
}