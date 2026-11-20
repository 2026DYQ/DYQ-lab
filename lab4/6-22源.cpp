#include <iostream>
#include <string>
using namespace std; 

void reverse(string& s, int left = 0)
{
    int right = s.size() - 1 - left;
    if (left >= right)
    {
        return;
    }
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;

    reverse(s, left + 1);
}
int main()
{
    string str;
    cout << "请输入字符串：";
    cin >> str;
    reverse(str);
    cout << "反转之后：" << str << endl;
    return 0;
}
