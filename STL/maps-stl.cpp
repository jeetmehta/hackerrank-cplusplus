#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_q;
    cin >> num_q;
    map <string, int> hashmap;
    
    for (int i = 0; i < num_q; i++)
    {
        int query_type;
        cin >> query_type;
        
        if (query_type == 1)
        {
            string name;
            int marks;
            cin >> name >> marks;
            map <string,int>::iterator it = hashmap.find(name);
            if (it != hashmap.end())
            {
                int existing_mark = hashmap[name];
                hashmap[name] = marks + existing_mark;  
            }
            else
            {
                hashmap.insert(make_pair(name, marks)); 
            }
        }
        else if (query_type == 2)
        {
            string name;
            cin >> name;
            hashmap.erase(name);
        }
        else if (query_type == 3)
        {
            string name;
            cin >> name;
            map <string,int>::iterator it = hashmap.find(name);
            if (it == hashmap.end())
            {
                cout << "0" << endl;  
            }
            else
            {
                cout << hashmap[name] << endl;
            }
            
        }
    }
    return 0;
}