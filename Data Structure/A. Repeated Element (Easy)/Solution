#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;
bool element_ex(int arr[],int n)
{
        for(int i=0;i<n;i++)
        {
            for(int j=i+1 ;j<n;j++)
            {
                if(arr[i]==arr[j])
                return true;
            }
        }
        return false;  
}
 
int main()
{
    
    int n ;
    //cout<<"please enter n"<<endl;
    cin>>n;
    int arr[100];
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int repeat=element_ex(arr , n);
   
    if(repeat== 1)
    cout<<"YES";
    else
     cout<<"NO";
 
    return 0;
}
