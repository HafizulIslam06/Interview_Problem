#include<iostream>
using namespace std;

string reverseWord(string word)
{
    char temp;
    int n= word.length();

    for(int i=0; i<n/2; i++)
    {
        temp= word[i];
        word[i]= word[n-i-1];
        word[n-1]= temp;
    }

    return word;
}

void palindromeCheck(string word)
{
    string rev;
    rev= reverseWord(word);

    if(rev== word)
    {
        cout<<"Palindrome."<<endl;
    }
    else
    {
        cout<<"Not Palindrome."<<endl;
    }
}

int main()
{
    string word;

    cout<<"Your word: ";
    cin>>word;

    palindromeCheck(word);
}
