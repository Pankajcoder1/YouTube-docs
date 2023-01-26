/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;


int solve(){
    // syntax of array
    array<int, 6> arr1={1,2};
    for(auto x:arr1){
        cout<<x<<" ";
    }
    cout<<endl;

    for(int i=0;i<6;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    // 2D array
    array<array<int, 3>, 2> arr2d={1,2,3,4,5,6};
    for(auto x:arr2d){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // 3D array
    array<array<array<int, 3>, 2>, 2> arr3d={1,2,3,4,5,6,7,8,9,10,11,12};
    for(auto x:arr3d){
        for(auto y:x){
            for(auto z:y){
                cout<<z<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;

    array<int, 6> arr={1,2,3,4,5,6};
    // operations on array
    // 1. at() ->  take a index and return the value at that index
    for(int i=0;i<6;i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;

    // 2. get() -> take a index and return the value at that index
    for(int i=0;i<6;i++){
        cout<<get<0>(arr)<<" ";
    }
    cout<<endl;

    // 3. front() -> return the first element of the array
    cout<<arr.front()<<endl;

    // 4. back() -> return the last element of the array
    cout<<arr.back()<<endl;

    // 5. size() -> return the size of the array
    // 6. max_size() -> return the maximum size of the array
    cout<<arr.size()<<" "<<arr.max_size()<<endl;

    // 7. empty() -> return true if array is empty else return false
    cout<<arr.empty()<<endl;

    // 8. fill() -> fill the array with the given value
    arr.fill(10);
    cout<<"After filling the array with 10"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << endl;

    // 9. swap() -> swap the array with the given array
    array<int, 6> arr2={10,20,30,40,50,60};
    swap(arr,arr2);
    cout<<"After swapping the array"<<endl;
    cout<<"arr: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << endl;

    cout<<"arr2: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr2.at(i) << " ";
    }
    cout << endl;
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