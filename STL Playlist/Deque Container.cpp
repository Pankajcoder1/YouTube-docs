/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;

int solve(){
    // deque<int> dq;
    // vector<int> v;
    // v.push_back(1);
    

    // // deque
    // dq.push_back(1);
    // dq.push_front(2);
    // dq.push_front(3);
    // for(auto x:dq){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    // cout<<"pop back element: "<<dq.back()<<endl;
    // dq.pop_back();
    // for (auto x : dq)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    // cout<<"pop front element: "<<dq.front()<<endl;
    // dq.pop_front();
    // for (auto x : dq)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;


    cout<<"deque of int data type: "<<endl;
    deque<int> dq1;
    dq1.push_back(1);
    for(auto x:dq1){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"deque of vector data type: "<<endl;
    deque<vector<int>> dq2;
    dq2.push_back({1,2,3,4,5});
    vector<int> v1={2,3};
    dq2.push_back(v1);
    for(auto x:dq2){
        for(int i=0;i<x.size();i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }

    cout<<"deque of array data type: "<<endl;
    deque<array<int, 3>> dq3;
    dq3.push_back({1,2,3});
    array<int, 3> a={4,5};
    dq3.push_back(a); 


    for(auto x:dq3){
        for(int i=0;i<x.size();i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    vector<int> temp = dq2.back();
    for(auto x:temp){
        cout<<x<<" ";
    }
    cout<<endl;

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