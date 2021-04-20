#include <iostream>

using namespace std;

int main()
{
    int* p = new int;
int* p2 = p;
*p = 10000;
delete p;               // co the gay mat du lieu cua p2 khi xoa p
cout << *p2;
delete p2;

    return 0;
}
