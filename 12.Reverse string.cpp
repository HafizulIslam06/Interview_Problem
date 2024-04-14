 #include <iostream>
using namespace std;

void reverseString(string word)
{
    int n= word.length();
    char temp;

    for(int i=0; i<n/2; i++)
    {
        temp= word[i];
        word[i]= word[n-i-1];
        word[n-i-1]= temp;
    }

    cout<<"Reversed Word: "<<word<<endl;
}

int main()
{
    string word;

    cout<<"your word: ";
    cin>>word;

    reverseString(word);
}
