/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;


void showList(list<vector<int>> l){
    for(auto i:l){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int solve(){
    // list<int> l1,l2;

    // l2.push_front(1);
    // l2.push_front(2);
    // showList(l2);

    // l1.push_back(1);
    // l1.push_back(2);
    // cout<<"back element is "<<l1.back()<<endl;

    // showList(l1);


    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    list<vector<int>> l3;
    l3.push_back(v);
    showList(l3);

    vector<int> v2;
    vector<list<array<int,3>>> l4;
    return 0;
}

int main()
{
    int testCase=1;
    while(testCase--){
        solve();
    }
    return 0;
}