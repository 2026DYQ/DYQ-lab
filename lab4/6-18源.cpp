#include<iostream>
using namespace std;

int fn1()
{
    int* p = new int(5);
    int temp = *p;
    delete p;
    return temp;
}

int main()
{
    int a = fn1();
    cout << "the value of a is:" << a;
    return 0;
}
