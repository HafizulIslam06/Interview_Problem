#include <iostream>
using namespace std;

int main()
{
    int x=5, y=10;

    cout<< "===Before Swap==="<<endl;
    cout<<"X :"<<x<<endl;
    cout<<"Y :"<<y<<endl;

    x= x + y;
    y= x - y;
    x= x - y;

    cout<< "===After Swap==="<<endl;
    cout<<"X :"<<x<<endl;
    cout<<"Y :"<<y<<endl;
}
