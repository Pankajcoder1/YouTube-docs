/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// set<int> s;
set<int>::iterator it;

set<int,greater<int>> s;
// unordered_set<int> s;
// unordered_set<int>::iterator it;

void show(){

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
}

int solve(){
    for(int i=1;i<=3;i++){
        s.insert(i*i);
    }
    s.insert(1);
    s.insert(2);
    s.insert(5);
    show();

    // s.clear();

    // empty
    cout<<"empty or not "<<s.empty()<<endl;

    // // lower_bound()
    // auto it1 = s.lower_bound(2);
    // cout<<"lower bound "<<*it1<<endl;

    // // upper_bound()
    // auto it2 = s.upper_bound(99);
    // cout << "upper bound " << *it2 << endl;

    // find
    int findElement = 9;
    if(s.find(findElement)!=s.end()){
        cout<<"found element "<<findElement<<" in set"<<endl;
    }
    else{
        cout<<"not found"<<endl;
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