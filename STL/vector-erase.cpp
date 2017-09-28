#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void print_vector(vector<int> storage)
{
    for (int i = 0; i < storage.size(); i++)
    {
        cout << storage[i] << " ";
    }
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    // Declare variables
    int size;
    cin >> size;
    vector <int> store_nums(size);
    
    // Fill in vector
    for (int i = 0; i < size; i++)
    {
        cin >> store_nums[i];
    }
    
    // Remove at Position
    int remove_index;
    cin >> remove_index;
    store_nums.erase(store_nums.begin() + remove_index - 1);
    
    // Remove range of elements
    int begin, end;
    cin >> begin >> end;
    store_nums.erase(store_nums.begin() + begin - 1, store_nums.begin() + end - 1);
    
    // Output
    cout << store_nums.size() << endl;
    print_vector(store_nums);
        
    return 0;
}