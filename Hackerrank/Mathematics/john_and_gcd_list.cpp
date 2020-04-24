/*
    Problem: https://www.hackerrank.com/challenges/john-and-gcd-list/problem
    
    Author: Bhushan Pagare

    Sample Input:
    2
    3
    1 2 3
    3
    5 10 5

    Sample Output:
    1 2 6 3
    5 10 10 5
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm(int a, int b) {
    ll lcm;
    if (a > b)
        lcm = a;
    else
        lcm = b;
    while (1) {
        if( lcm%a==0 && lcm%b==0 ) {
            break;
        }
        lcm++;
    }
    return lcm;
}

void find_gcd_list(int n) {
    vector<int> input_list;
    int element;
    for(int i=0; i<n; ++i) {
        cin >> element;
        input_list.push_back(element);
    }
    cout << input_list[0] << " ";
    for (int i=1; i<input_list.size(); ++i) {
        cout << lcm(input_list[i-1], input_list[i]) << " ";
    }
    cout << input_list[input_list.size()-1] << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;

    for (int i=0; i<t; ++i) {
        // Take input pair
        cin >> n;
        // Find the solution
        find_gcd_list(n);
    }

    return 0;
}