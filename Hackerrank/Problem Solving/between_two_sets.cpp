    /*
        Problem: https://www.hackerrank.com/challenges/between-two-sets/problem

        Author: Bhushan Pagare

        Sample Input:
        2 3
        2 4
        16 32 96

        Sample Output:
        3
    */

    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long

    void find_between_sets(int m, int n) {
        vector<int> array_one, array_two;
        int number;
        for (int i = 0; i < m; ++i) {
            cin >> number;
            array_one.push_back(number);
        }
        for (int i = 0; i < n; ++i) {
            cin >> number;
            array_two.push_back(number);
        }
        vector<int> factors;
        bool factor = true;
        for (int i = array_one[(int)array_one.size() - 1]; i <= array_two[0]; ++i) {
            factor = true;
            for (int j = 0; j < (int)array_one.size(); ++j) {
                if (i % array_one[j]) {
                    factor = false;
                    break;
                }
            }
            if (factor)
                factors.push_back(i);
        }
        int num_between = 0;
        for (int i = 0; i < (int)factors.size(); ++i) {
            factor = true;
            for (int j = 0; j < (int)array_two.size(); ++j) {
                if (array_two[j] % factors[i]) {
                    factor = false;
                    break;
                }
            }
            if (factor)
                num_between++;
        }
        cout << num_between << "\n";
    }

    int main() {
        // Making IO operations faster
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int m, n;
        cin >> m >> n;
        find_between_sets(m, n);

        return 0;
    }