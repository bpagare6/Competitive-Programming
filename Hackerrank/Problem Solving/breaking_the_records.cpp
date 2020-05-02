/*
    Problem: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
    
    Author: Bhushan Pagare

    Sample Input:
    9
    10 5 20 20 4 5 2 25 1

    Sample Output:
    2 4
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void breaking_records(int n) {
    vector<ll> scores;
    ll score;
    for (int i = 0; i < n; ++i) {
        cin >> score;
        scores.push_back(score);
    }
    ll maximum_score = scores[0];
    ll minimum_score = scores[0];
    int max_record_break = 0;
    int min_record_break = 0;
    for (int i = 1; i < n; ++i) {
        if (scores[i] > maximum_score) {
            max_record_break += 1;
            maximum_score = scores[i];
        } else if (scores[i] < minimum_score) {
            min_record_break += 1;
            minimum_score = scores[i];
        }
    }
    cout << max_record_break << " " << min_record_break << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    breaking_records(n);

    return 0;
}