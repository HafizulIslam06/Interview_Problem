#include<iostream>
using namespace std;

bool palindromeCheck(string word)
{
    char temp;
    int length=word.length();

    for(int i=0; i<length/2; i++)
    {
        if(word[i]!=word[length-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string word;

    cout<<"word: ";
    cin>>word;

    bool result= palindromeCheck(word);

    if(result == true)
    {
        cout<<"palindrome."<<endl;
    }
    else
    {
        cout<<"Not palindrome!"<<endl;
    }
}

