/*
    Problem: https://www.hackerrank.com/challenges/acm-icpc-team/problem
    
    Author: Bhushan Pagare

    Sample Input:
    4 5
    10101
    11100
    11010
    00101

    Sample Output:
    5
    2
*/

#include <bits/stdc++.h>
using namespace std;

void acm_icpc_teams(int n, int m) {
    vector<string> individuals;
    string knowledge;
    for (int i = 0; i < n; ++i) {
        cin >> knowledge;
        individuals.push_back(knowledge);
    }
    int max_score = 0;
    int teams_with_max_score = 1;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int score = 0;
            for (int k = 0; k < m; ++k) {
                if (individuals[i][k] == '1' || individuals[j][k] == '1') {
                    score += 1;
                }
            }
            if (score > max_score) {
                max_score = score;
                teams_with_max_score = 1;
            } else if (score == max_score) {
                teams_with_max_score += 1;
            }
        }
    }
    cout << max_score << "\n" << teams_with_max_score << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    acm_icpc_teams(n, m);

    return 0;
}