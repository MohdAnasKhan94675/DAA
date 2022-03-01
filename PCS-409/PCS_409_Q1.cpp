#include<iostream>
# define max 100
using namespace std;
int main()
{
    int n,key,i ;
    int arr[max];
    cout<<"Enter the Size of An Array :";
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Key:";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<"At Index :"<<i<<endl;
            cout<<"No. of Comparisons :"<<i+1<<endl;
        }
    }
}