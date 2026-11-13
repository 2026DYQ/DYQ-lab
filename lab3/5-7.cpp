#include <iostream>
using namespace std;
class Cat {
private:
    static int numOfCats;
public:
    Cat() {
        numOfCats++; 
        cout << "一只猫诞生了，当前共有 " << numOfCats << " 只猫。" << endl;
    }
    static int getNumOfCats() {
        return numOfCats;
    }
};
int Cat::numOfCats = 0;
int main() {
    cout << "初始猫的数量: " << Cat::getNumOfCats() << endl;
    Cat cat1;
    Cat cat2; 
    Cat cat3; 
    cout << "此时猫的数量: " << Cat::getNumOfCats() << endl;
    return 0;
}