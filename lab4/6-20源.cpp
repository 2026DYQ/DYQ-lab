#include <iostream>
using namespace std;
class SimpleCircle
{
private:
    int* itsRadius;
public:
    SimpleCircle(int r = 0)
    {
        itsRadius = new int(r);
    }
    SimpleCircle(const SimpleCircle& c)
    {
        itsRadius = new int(*c.itsRadius);
    }
    ~SimpleCircle()
    {
        delete itsRadius;
        itsRadius = nullptr;
    }
    void setRadius(int r)
    {
        *itsRadius = r;
    }
    int getRadius() const
    {
        return *itsRadius;
    }
};
int main()
{
    SimpleCircle c1(10);
    cout << "c1µÄ°ë¾¶£º" << c1.getRadius() << endl;
    c1.setRadius(15);
    cout << "ÐÞ¸Äºóc1°ë¾¶£º" << c1.getRadius() << endl;

    SimpleCircle c2 = c1;
    cout << "c2µÄ°ë¾¶£º" << c2.getRadius() << endl;
    c2.setRadius(20);
    cout << "ÐÞ¸Äc2ºó£ºc2°ë¾¶=" << c2.getRadius() << "£¬c1°ë¾¶=" << c1.getRadius() << endl;
    return 0;
}
