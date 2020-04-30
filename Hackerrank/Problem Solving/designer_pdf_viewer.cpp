/*
    Problem: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

    Author: Bhushan Pagare

    Sample Input:
    1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
    abc

    Sample Output:
    9
*/

#include <bits/stdc++.h>
using namespace std;

void designer_pdf_viewer() {
    vector<int> letter_heights(26, 0);
    int height;
    for (int i = 0; i < 26; ++i) {
        cin >> height;
        letter_heights[i] = height;
    }
    string word;
    cin >> word;
    int max_height = 0;
    for (int i = 0; i < word.size(); ++i) {
        if (max_height < letter_heights[word[i] - 'a'])
            max_height = letter_heights[word[i] - 'a'];
    }
    cout << max_height * word.size() << "\n";
}

int main() {
    // Making IO operations faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    designer_pdf_viewer();

    return 0;
}