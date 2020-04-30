/*
    Problem: https://www.hackerrank.com/challenges/mini-max-sum/problem
    
    Author: Bhushan Pagare

    Sample Input:
    1 3 5 7 9

    Sample Output:
    16 24
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void mini_max_sum() {
    ll sum = 0;
    ll element;
    cin >> element;
    sum += element;
    ll min = element, max = element;
    for (int i = 0; i < 4; ++i) {
        cin >> element;
        sum += element;
        if (element > max)
            max = element;
        if (element < min)
            min = element;
    }
    cout << sum - max << " " << sum - min << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    mini_max_sum();

    return 0;
}