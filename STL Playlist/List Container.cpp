/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;

void printList(list<int> l)
{
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

int solve(){
    list<int> l;
    // l.assign({1,2,3,4,5});
    // for(auto it=rbegin(l);it!=rend(l);it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    l.push_front(6);
    l.push_back(7);
    l.push_front(8);
    l.push_back(9);
    printList(l);

    forward_list<list<int>> fl;
    fl.push_front(l);
    for(auto x:fl){
        printList(x);
    }
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