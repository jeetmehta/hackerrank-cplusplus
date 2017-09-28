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
    vector <int> numarray;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        numarray.push_back(num);
    }
    sort(numarray.begin(), numarray.end());
    for (int i = 0; i < size; i++)
    {
        cout << numarray[i] << " ";
    }
    return 0;
}