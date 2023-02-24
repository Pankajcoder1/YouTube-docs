/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;


int solve(){
    queue<int> q;
    q.push(4);
    q.push(3);
    cout<<"size of queue is "<<q.size()<<endl;
    cout<<"empty of not "<<q.empty()<<endl;
    cout<<"front element "<<q.front()<<endl;
    cout<<"back element is "<<q.back()<<endl;

    q.pop();
    cout<<"after pop, front element is "<<q.front()<<endl;
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