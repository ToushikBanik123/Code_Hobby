#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s="Programing";
    //s.replace(index_number_whare_you_want_to_replace, number_of_element_thetn_you_want_to_replace,"string_to_replace")
    s.replace(3,5,"aa");
    cout<<s;
    return 0;
}
