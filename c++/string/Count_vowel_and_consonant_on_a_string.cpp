#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "how Many WOrds";
    int i = 0;
    int count = 0;
    int space = 0;
    int vowel = 0;
    int consonant = 0;
    while (str[i] != 0)
    {
        if (str[i] == ' ')
        {
            space++;
        }
        else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }

        count++;
        i++;
    }

    cout << "Total character : " << count << endl;
    cout << "Total space : " << space << endl;
    cout << "Total Words : " << space + 1 << endl;
    cout << "Total Vowel : " << vowel << endl;
    cout << "Total Consonant : " << consonant << endl;
    return 0;
}
