/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;

map<int,int> m;

void showMap(){
    for(auto x:m){
        cout<<"key is "<<x.first<<" value is "<<x.second<<endl;
    }
}

int solve(){
    // key will be sorted and unique in nature
    m[3] = 5;
    m[10] = 10;
    m[8] = 8;
    m[7] = 7;
    m[1] = 1;
    for(int i=1;i<=5;i++){
        m.insert({i,i*2});
        // m[i]=2*i;
    }
    // update value
    
    showMap();

    cout<<endl;

    // begin
    cout<<"first element, key is "<<m.begin()->first<<endl;
    cout << "first value is " << m.begin()->second << endl;

    // size
    // cout<<"size of map is "<<m.size()<<endl;

    // empty
    // cout<<"map is empty or not "<<m.empty()<<endl;

    // erase
    // m.erase(m.begin());
    // m.erase(12);

    // clear
    // m.clear();
    showMap();

    // insert
    m.insert({15,16});

    // find
    // if(m.find(1)!=m.end()){
    //     cout<<"found with key 1"<<endl;
    // }
    // else{
    //     cout<<"no found with key 1"<<endl;
    // }

    // lower bound
    // auto it = m.lower_bound(2);
    // cout<<(*it).first<<" "<<(*it).second<<endl;

    // upper bound
    auto it = m.upper_bound(2);
    cout << (*it).first << " " << (*it).second << endl;
    // showMap();

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