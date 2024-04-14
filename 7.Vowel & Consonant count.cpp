#include<iostream>
using namespace std;

int main()
{
    string name;
    int vowel=0 ,consonant=0;

    cout<<"Your String: ";
    cin>>name;

    for(int i=0; i<name.length(); i++)
    {
        if(name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u'
           || name[i]=='A'|| name[i]=='E'|| name[i]=='I'|| name[i]=='O'|| name[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }

    cout<<"Vowel: "<<vowel<<endl;
    cout<<"Consonant: "<<consonant;
}

