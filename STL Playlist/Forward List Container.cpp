/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;

void showList(forward_list<int> l)
{
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

int solve()
{
    forward_list<int> l;
    // assign operation
    // l.assign({1});
    // showList(l);
    l.assign({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    // showList(l);
    // forward_list<int> l2;
    // l2.assign({1,2,3,4,5,6,7,8,9,10});
    // l.assign(l2.begin(),l2.end());
    // showList(l);
    // l.assign(10,5);
    // showList(l);

    // push_front operation
    l.push_front(0);
    // pop front operation
    l.pop_front();

    // insert_after operation
    auto it = l.begin();
    it++;
    l.insert_after(it, 5);
    l.insert_after(it, {6, 7, 8, 9, 10});

    // erase_after operation
    it++;
    l.erase_after(it);

    // remove operation
    // l.remove(5);

    // remove_if operation
    l.remove_if([](int x)
                { return x % 2 == 0; });


    // splice_after operation
    forward_list<int> l2;
    l2.assign({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    it = l.begin();
    it++;
    l.splice_after(it, l2);

    showList(l);

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