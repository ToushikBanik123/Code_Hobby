#include <iostream>
#include<string>
using namespace std;

int main()
{
    // s.empty help to identify if a string is empty or not
    string s="program";
    s.clear();
    if(s.empty()){
        cout<<"we dont have a string"<<endl;
    }
    return 0;
}
