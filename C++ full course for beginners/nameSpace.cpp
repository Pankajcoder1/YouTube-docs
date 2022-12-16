#include <iostream>
using namespace std;

namespace first_space
{
    void fun1()
    {
        cout << "Inside first_space" << endl;
    }
}

namespace second_space
{
    void fun1()
    {
        cout << "Inside second_space" << endl;
    }
}

int main()
{
    second_space::fun1();
    return 0;
}
