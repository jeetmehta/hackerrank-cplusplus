#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    vector < vector <int> > storage(n);
    for (int i = 0; i < n; i++)
    {
        int row_size;
        cin >> row_size;
        vector <int> row(row_size);
        for (int j = 0; j < row_size; j++)
        {
            int val;
            cin >> val;
            row[j] = val;
        }
        storage[i] = row;
    }

    for (int num = 0; num < q; num++)
    {
        int row_idx, col_idx;
        cin >> row_idx >> col_idx;
        cout << storage[row_idx][col_idx] << endl;
    }
    return 0;
}