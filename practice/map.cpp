#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string ,int> m;
    int n,no,q;
    string a;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>n;
        switch(n){
        case 1:
            cin>>a>>no;
            if(m.find(a)==m.end())
                m.insert(make_pair(a,no));
            else {
                m[a] = m[a]+no;
            }
            break;
        case 2:
            cin>>a;
            if(m.find(a)!=m.end())
                m.erase(a);
            break;
        case 3:
            cin>>a;
            if(m.find(a)!=m.end())
                cout<<m[a]<<"\n";
            else
                cout<<0<<"\n";
        }
    }
    
    return 0;
}

