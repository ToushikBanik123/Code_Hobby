#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "today";
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << char(str[i] - 32);
    }

    return 0;
}
