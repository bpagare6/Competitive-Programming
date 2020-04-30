/*
    Problem: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
    
    Author: Bhushan Pagare

    Sample Input:
    7
    100 100 50 40 40 20 10
    4
    5 25 50 120

    Sample Output:
    6
    4
    2
    1
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void climbing_leaderboard() {
    int n, m;
    vector<ll> leaderboard, alice_scores;
    ll last_score;
    ll score;
    cin >> n;
    cin >> last_score;
    leaderboard.push_back(last_score);
    for (int i = 0; i < n - 1; ++i) {
        cin >> score;
        if (score != last_score) {
            last_score = score;
            leaderboard.push_back(score);
        }
    }
    cin >> m;
    int rank = (int)leaderboard.size() + 1;
    for (int i = 0; i < m; ++i) {
        cin >> score;
        while (rank != 1 && score >= leaderboard[rank - 2])
            rank -= 1;
        cout << rank << "\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    climbing_leaderboard();

    return 0;
}