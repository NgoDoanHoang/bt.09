#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int *x=&a;

    delete x;

    cout << x << "-" << a;
    cout << *x;
                            //mat du lieu
    return 0;
}
