/*
    Problem: https://www.hackerrank.com/challenges/migratory-birds/problem
    
    Author: Bhushan Pagare

    Sample Input:
    11
    1 2 3 4 5 4 3 2 1 3 4

    Sample Output:
    3
*/

#include <bits/stdc++.h>
using namespace std;

void migratory_birds(int n) {
    map<int, int> birds;
    int bird;
    for (int i = 0; i < n; ++i) {
        cin >> bird;
        birds[bird]++;
    }
    int max_occured = 0;
    int bird_species = 0;
    for (auto bird: birds) {
        if (bird.second > max_occured) {
            max_occured = bird.second;
            bird_species = bird.first;
        } else if (bird.second == max_occured && bird.first < bird_species)
            bird_species = bird.first;
    }
    cout << bird_species << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    migratory_birds(n);

    return 0;
}