/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    // kadane's algorithm
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max_so_far=INT_MIN,max_ending_here=0;
    for(int i=0;i<n;i++){
        max_ending_here+=v[i];
        // if(max_so_far<max_ending_here){
        //     max_so_far=max_ending_here;
        // }
        
        max_so_far=max(max_so_far,max_ending_here);

        if(max_ending_here<0){
            max_ending_here=0;
        }
    }
    cout<<max_so_far<<endl;
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