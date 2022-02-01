#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "MALAYALAM";
    string rstr = "";
    int length = str.length();
    rstr.resize(length);
    for (int i = 0; i < length; i++)
    {
        rstr[i] = str[length - i - 1];
    }
    rstr[length] = '\0';

    if (str.compare(rstr) == 0)
    {
        cout << "Palandrome" << endl;
    }
    else
    {
        cout << "Not a Palandrome" << endl;
    }

    return 0;
}
