#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    int array_nums[1000];
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> array_nums[i];
    }
    for (int i = size-1; i >= 0; i--)
    {
        cout << array_nums[i] << " ";
    }
    return 0;
}