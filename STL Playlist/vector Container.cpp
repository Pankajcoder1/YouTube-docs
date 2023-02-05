/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v;

void printVector(){
    cout<<endl<<"print vector"<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}

int solve(){
    // just declare a vector
    // vector<int> v1;
    // declare a vector with size 5
    // vector<int> v2(5);
    // declare a vector with size 5 and initialize all the element with 10
    // vector<int> v3(5,10);

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // cout<<"by using normal iterator"<<endl;
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // cout<<"by using reverse iterator"<<endl;
    // for(auto it=v.rbegin();it!=v.rend();it++){
    //     cout<<*it<<" ";
    // }

    // cout<<"by using normal iterator"<<endl;
    // for(auto it=v.begin();it!=v.end();it++){
    //     *it+=1;
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // cout<<"by using constant iterator"<<endl;
    // for(auto it=v.cbegin();it!=v.cend();it++){
    //     // *it+=1;
    //     cout<<*it<<" ";
    // }

    // v.push_back(4);
    // v.push_back(5);
    // // size of vector
    // cout<<"size of vector is "<<v.size()<<endl;
    // // max size of vector
    // cout<<"max size of vector is "<<v.max_size()<<endl;
    // // capacity of vector
    // cout<<"capacity of vector is "<<v.capacity()<<endl;
    // // resize the vector
    // v.resize(10);
    // printVector();
    // cout<<"size of vector is "<<v.size()<<endl;
    // cout<<"capacity of vector is "<<v.capacity()<<endl;
    // cout<<"empty or not "<<v.empty()<<endl;


    // cout<<"element at position 0th "<<v.at(0)<<endl;
    // cout<<"front element is "<<v.front()<<endl;
    // cout<<"back element is "<<v.back()<<endl;

    // v.pop_back();
    // printVector();
    // v.emplace(v.begin()+2,2);
    // printVector();
    // v.clear();
    // printVector();
    // cout<<"empty or not "<<v.empty()<<endl;
    // v.emplace_back(1);
    // printVector();
    // printVector();
    // v.assign(5,10);
    // printVector();

    // erase the element from vector
    // v.erase(v.begin()+2);
    // printVector();
    // vector<int> v5;
    // v5.push_back(1);


    // vector<array<int, 3>> v1;
    // v1.push_back({1,2,5});
    // v1.push_back({3,4});
    // for(auto x:v1){
    //     cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    // }

    array<int, 3> a1={1,2,3};
    array<vector<int>, 3> a2;
    a2[0].push_back(1);
    a2[0].push_back(2);
    a2[0].push_back(3);
    a2[0].push_back(4);
    a2[1].push_back(4);
    a2[1].push_back(5);
    a2[1].push_back(6);
    a2[2].push_back(7);
    a2[2].push_back(8);
    for(int i=0;i<3;i++){
        for(auto x:a2[i]){
            cout<<x<<" ";
        }
        cout<<endl;
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