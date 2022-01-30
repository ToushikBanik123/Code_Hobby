#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "welcome";
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
        count++;
    }
    cout << count;

    return 0;
}
