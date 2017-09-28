#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    vector <int> store(size);
    
    for (int i = 0; i < size; i++)
    {
        cin >> store[i];
    }
    
    int q;
    cin >> q;
    for (int j = 0; j < q; j++)
    {
        int poll_val;
        cin >> poll_val;
        
        vector <int>::iterator lower_bound_idx = lower_bound(store.begin(), store.end(), poll_val);
        if (*lower_bound_idx == poll_val)
            cout << "Yes " << lower_bound_idx - store.begin() + 1 << endl; 
        else
            cout << "No " << lower_bound_idx - store.begin() + 1 << endl;
    }
    return 0;
}