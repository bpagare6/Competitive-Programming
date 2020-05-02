/*
    Problem: https://www.hackerrank.com/challenges/magic-square-forming/problem

    Author: Bhushan Pagare

    Sample Input:
    4 9 2
    3 5 7
    8 1 5

    Sample Output:
    1
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void form_magic_square() {
    vector<vector<int>> input;
    int number;
    for (int i = 0; i < 3; ++i) {
        vector<int> temporary;
        for (int j = 0; j < 3; ++j) {
            cin >> number;
            temporary.push_back(number);
        }
        input.push_back(temporary);
    }
    vector<vector<vector<int>>> pre_computed_matrix;
    pre_computed_matrix = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}
    };

    int min_change = INT_MAX;
    for (int i = 0; i < 8; ++i) {
        vector<vector<int>> temp = input;
        int change = 0;
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                change += abs(temp[j][k] - pre_computed_matrix[i][j][k]);
            }
        }
        if (min_change > change) {
            min_change = change;
        }
    }
    cout << min_change << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    form_magic_square();

    return 0;
}