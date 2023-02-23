/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;


int solve(){
    // vector<long long> cont;

    // declaration
    
    stack<int> st;
    
    // for(int i=1;i<=5;i++){
    //     st.push(i);
    // }
    // cout<<"after adding element "<<st.size()<<endl;
    // cout<<"is empty or not "<<st.empty()<<endl;
    // cout<<"top element is "<<st.top()<<endl;

    // cout<<"   pop operation performed"<<endl;
    // st.pop();

    // cout << "after adding element " << st.size() << endl;
    // cout << "is empty or not " << st.empty() << endl;
    // cout << "top element is " << st.top() << endl;

    if(st.size()){
        cout<<st.top()<<endl;
        st.pop();
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