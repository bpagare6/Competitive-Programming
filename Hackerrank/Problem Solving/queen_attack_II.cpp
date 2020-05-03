/*
    Problem: https://www.hackerrank.com/challenges/queens-attack-2/problem
    
    Author: Bhushan Pagare

    Sample Input:
    4 0
    4 4

    Sample Output:
    9
*/

#include <bits/stdc++.h>
using namespace std;

int valid_position(int n, int x, int y) {
    return ((x <= n) && (x > 0) && (y <= n) && (y > 0));
}

int attack(int n, int q_x, int q_y, int dir_x, int dir_y, map<pair<int, int>, bool> obstacles) {
    int attack_positions = 0;
    while(valid_position(n, q_x, q_y) && !obstacles[{q_x, q_y}]) {
        q_x += dir_x;
        q_y += dir_y;
        attack_positions += 1;
    }
    return attack_positions;
}

void queen_attack(int n, int o) {
    int queen_x, queen_y;
    cin >> queen_x >> queen_y;
    map<pair<int, int>, bool> obstacles;
    int ob_x, ob_y;
    for (int i = 0; i < o; ++i) {
        cin >> ob_x >> ob_y;
        obstacles[{ob_x, ob_y}] = true;
    }

    int attack_positions = 0;
    attack_positions += attack(n, queen_x + 1, queen_y, 1, 0, obstacles);
    attack_positions += attack(n, queen_x - 1, queen_y, -1, 0, obstacles);
    attack_positions += attack(n, queen_x, queen_y + 1, 0, 1, obstacles);
    attack_positions += attack(n, queen_x, queen_y - 1, 0, -1, obstacles);
    attack_positions += attack(n, queen_x + 1, queen_y + 1, 1, 1, obstacles);
    attack_positions += attack(n, queen_x + 1, queen_y - 1, 1, -1, obstacles);
    attack_positions += attack(n, queen_x - 1, queen_y + 1, -1, 1, obstacles);
    attack_positions += attack(n, queen_x - 1, queen_y - 1, -1, -1, obstacles);

    cout << attack_positions << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, o;
    cin >> n >> o;
    queen_attack(n, o);

    return 0;
}