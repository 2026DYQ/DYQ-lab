#ifndef X_H
#define X_H
#include <iostream>
class X; 
class Y {
public:
    void g(X* x); 
};
class Z {
public:
    void f(X* x);
};
class X {
private:
    int i;
public:
    X(int val = 0) : i(val) {}
    void show() const;
    friend void Y::g(X* x);
    friend class Z;
    friend void h(X* x);
};
void h(X* x);
#endif