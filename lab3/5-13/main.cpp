#include <iostream>
#include "X.h"
int main() {
    X xObj(0);
    xObj.show();
    Y yObj;
    yObj.g(&xObj);
    xObj.show();
    Z zObj;
    zObj.f(&xObj);
    xObj.show();
    h(&xObj);
    xObj.show();
    return 0;
}
