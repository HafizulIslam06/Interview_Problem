#include<iostream>
using namespace std;

void linearSearch(int arr[], int size, int num)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == num)
        {
            cout<<num <<" it's present in index: "<<i<<endl;
            return;
        }
    }
    cout<<"Not Found!"<<endl;
}

int main()
{
    int num, arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout<<"Search a number: ";
    cin>>num;

    linearSearch(arr, size, num);

    return 0;
}
