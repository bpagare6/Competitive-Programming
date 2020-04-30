/*
    Problem: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
    
    Author: Bhushan Pagare

    Sample Input:
    4
    3 2 1 3

    Sample Output:
    2
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void birthday_cake_candle(int n) {
    unordered_map<int, int> candle_occurences;
    ll element;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        candle_occurences[element]++;
    }
    ll max_height = 0;
    for (auto candle: candle_occurences) {
        if (candle.first > max_height)
            max_height = candle.first;
    }
    cout << candle_occurences[max_height] << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    birthday_cake_candle(n);

    return 0;
}