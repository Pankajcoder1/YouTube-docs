/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;

void printList(forward_list<int> fl)
{
    for (auto i : fl)
    {
        cout << i << " ";
    }
    cout << endl;
}

int solve()
{
    forward_list<int> fl;
    fl.push_front(1);
    fl.push_front(2);
    fl.push_front(3);

    
    // // printList(fl);
    // // fl.pop_front();
    // // printList(fl);

    // // cout<<*fl.begin()<<endl;

    // fl.push_front(4);
    // fl.push_front(5);
    // printList(fl);

    // fl.insert_after(fl.begin(), 6);

    // printList(fl);

    // auto it = fl.begin();
    // it++;
    // fl.insert_after(it, 3, 7);
    // printList(fl);

    // // fl.clear();
    // // printList(fl);

    // fl.remove(7);
    // printList(fl);

    // fl.remove_if([](int x)
    //              { return x % 2 == 1; });
    // printList(fl);

    // fl.assign({1, 2, 3, 4, 5});
    // printList(fl);

    // fl.splice_after(fl.begin(), {6, 7, 8, 9});
    // printList(fl);

    array<int, 5> arr = {1, 2, 3, 4, 5};
    forward_list<array<int,5>> fl1;
    fl1.push_front({2,3,4,5,6});
    fl1.push_front(arr);
    for(auto i:fl1){
        for(int x=0;x<i.size();x++){
            cout<<i[x]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
int main()
{
    int testCase = 1;
    while (testCase--)
    {
        solve();
    }
    return 0;
}