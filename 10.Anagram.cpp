#include <iostream>
using namespace std;

string sorting(string x)
{
    char temp;
    for(int i=0; i<x.length()-1; i++)
    {
        for(int j=i+1; j<x.length(); j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    return x;
}

int main()
{
    string x, y;

    cout<<"First word: ";
    cin>>x;

    cout<<"Second word: ";
    cin>>y;

    if(sorting(x)==sorting(y))
    {
        cout<<"Anagram"<<endl;
    }
    else
    {
        cout<<"Not Anagram"<<endl;
    }

    return 0;
}
