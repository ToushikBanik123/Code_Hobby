#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter Your String : ";
    cin >> str;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = char(str[i] - 32);
        }
        i++;
    }
    cout << str;

    return 0;
}
