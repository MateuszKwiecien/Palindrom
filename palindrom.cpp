#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const std::string & text)
{
    string textBackwards = text;
    for(int i = 0; i<textBackwards.length(); i++)
    {
        textBackwards[textBackwards.length()-(i+1)] = text[i];
    }

    bool result;
    if(textBackwards==text)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    return result;
}

int main()
{
    string input;
    cin>>input;
    cout<<isPalindrome(input)<<endl;
    return 0;
}