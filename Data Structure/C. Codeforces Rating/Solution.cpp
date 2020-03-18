#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;
int sum(int arr[],int n[],int count_test)
{
    int sumofarr=0;
        for(int i=0;i<n[count_test];i++)
        {
           sumofarr+=arr[i];
        } 
        return sumofarr;
}
 
int main()
{
    //number of testcases
    int no_testcase;
    cin>>no_testcase;
    int count =0;
    int count2=0;//anhy testcase
    int sumarray[100];
    int N[100];
    int R[100];
    int arr[2000];
  while(count<no_testcase)
    {
        cin>>N[count];
    cin>>R[count];
    //cout<<N[count]<<endl;
    //cout<<R[count]<<endl;
    for(int i=0;i<N[count];i++)
     {
         cin>>arr[i];
     }
     sumarray[count]= sum(arr,N,count)+1500;
     count++; 
     
     //cout<<count<<endl;
    }
    
    //cout<<count;
    //N:no of changes
    //R:final rating
    while(count2< no_testcase){
    if(sumarray[count2]== R[count2]){
    cout<<"Correct"<<endl;
      count2++;
  }
    else{
     cout<<"Bug"<<endl;
     count2++;
    }}
    count2=0;
    return 0;
}
