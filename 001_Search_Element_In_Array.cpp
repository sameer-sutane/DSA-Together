/*
Sutane Sameer Prashant
SE AI&DS
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,ele,x,flag=0;
    cout<<"Enter number of elements: ";
    cin >>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>ele;
        arr[i]=ele;
    }
    cout<<"entered elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<< "\nenter the element to search: ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"element "<<x<<" found at index "<<i;
            flag=1;
        }
        
    }
    if(flag==0)
        {
            cout << "element not present in given array";
        }
}
