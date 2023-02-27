/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;

int solve(){
    // syntax of max heap
    priority_queue<int> pq1;

    // syntax of min heap
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq1.push(3);
    pq1.push(-3);
    pq1.push(10);

    
    cout<<"empty or not "<<pq1.empty()<<endl;
    cout<<"size of max heap "<<pq1.size()<<endl;
    cout<<"top element of max heap "<<pq1.top()<<endl;
    pq1.pop();
    cout << "top element of max heap " << pq1.top() << endl;
    cout << "size of max heap " << pq1.size() << endl;

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