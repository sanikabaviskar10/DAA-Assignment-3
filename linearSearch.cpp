// program for linear search

#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
          cout<<"found at index->"<<i;
        
        }
    }
}
int main()
{
    int arr[] = {4,5,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=7;
    linearSearch(arr, n, k);

}
