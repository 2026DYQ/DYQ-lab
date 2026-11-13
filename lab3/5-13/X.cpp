#include "X.h"
void h(X* x) { x->i += 10; }
void Y::g(X* x) { x->i += 1; }
void Z::f(X* x) { x->i += 5; }
void X::show() const {
    std::cout << "X 的私有成员 i 的值为: " << i << std::endl;
}
