#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int countLetter(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string sentence;
    cout << "请输入一条英文句子：";
    getline(cin, sentence);
    int num = countLetter(sentence);
    cout << "句子里字母的总个数：" << num << endl;
    return 0;
}
