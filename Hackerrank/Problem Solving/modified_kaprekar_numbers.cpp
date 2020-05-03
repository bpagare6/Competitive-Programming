/*
    Problem: https://www.hackerrank.com/challenges/kaprekar-numbers/problem
    
    Author: Bhushan Pagare

    Sample Input:
    1
    100

    Sample Output:
    1 9 45 55 99
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void find_kaprekar_numbers(ll p, ll q) {
    bool no_kaprekar = true;
    for (ll i = p; i <= q; ++i) {
        ll square = i * i;
        string square_string = to_string(square);
        int d = to_string(i).length();
        string num_1 = square_string.substr(square_string.length() / 2);
        string num_2 = square_string.substr(0, square_string.length() / 2);
        ll num_one, num_two;
        num_one = stoi(num_1);
        if (num_2.length() == 0)
            num_two = 0;
        else
            num_two = stoi(num_2);
        if (num_one + num_two == i) {
            cout << i << " ";
            no_kaprekar = false;
        }
    }
    if (no_kaprekar) {
        cout << "INVALID RANGE\n";
    }
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll p, q;
    cin >> p >> q;
    find_kaprekar_numbers(p, q);

    return 0;
}