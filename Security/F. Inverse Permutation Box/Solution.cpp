/******************************************************************************
Inverse Permutation Box
 
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
   int s;
   cin>>s;
   int *prem_box=new int [s];
   int *inv_prem_box=new int [s];
   for(int i=0;i<s;i++)
   {
       cin>>prem_box[i];
   }
    // lo ana md5la 16 yb2a lazm elarkam tb2a mn 1 le 16 mwgoda
    int count =0;
     int val2=0;
     int irv=0;
   for(int j=0;j<s;j++)
   { //mn 1 le 16 mwgod
     int val=prem_box[j];
     
     if(val>=1& val<=s){
      if(val==val2){//repeated 
      irv=1;break;}
     count++;
         
     }
     else irv=1;
        val2=val;
   }
      
   
   for(int i=0;i<s;i++)
   {
       int value=prem_box[i]-1;
       inv_prem_box[value]=i+1;
   }
   
   if(irv!=1){for(int i=0;i<s;i++){cout<<inv_prem_box[i]<<" ";}}
   else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
