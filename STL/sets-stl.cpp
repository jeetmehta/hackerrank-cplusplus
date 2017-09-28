#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size;
    set <int> container;
    
    for (int i = 0; i < size; i++)
    {
        int q, val;
        cin >> q >> val;
        if (q == 1)
        {
            container.insert(val);
        }
        else if (q == 2 && container.size() >= 1)
        {
            container.erase(val);
        }
        else if (q == 3)
        {
            set <int>::iterator index = container.find(val);
            if (index != container.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

    }
    return 0;
}