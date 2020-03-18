#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;
int issame(string word1,string word2, int sizeofword)
{ 
    int flag2=0;
 
    for(int i=0;i<sizeofword;i++)
    { 
        //loop of string array
         if(word1[i]==word2[i])
        { //checking every letter
            flag2++;
        }
       else if((word1[i]=='e'||word1[i]=='E' )&& (word2[i]=='i'||word2[i]=='I'))
        {
            flag2++;
        }
          else if((word1[i]=='i'||word1[i]=='I') && (word2[i]=='e'||word2[i]=='E'))
        {
            flag2++;
        }
         else if((word1[i]=='p'||word1[i]=='P') &&(word2[i]=='b'||word2[i]=='B'))
        {
          flag2++;
        }
          else if((word1[i]=='b'||word1[i]=='B') && (word2[i]=='p'||word2[i]=='p'))
        {
            flag2++;
        }
       
        
    }
    if(flag2==sizeofword)
    { 
      flag2=0;
        return 1;
    }
     flag2=0;
 return 0;
}
 
 
int main()
{
    //number of testcases
    int no_testcase;
    cin>>no_testcase;
    int count =0;//counting inputs
   int count2=0;
    int count_word=0;
    string word1,word2;
    int flag[100];
    
    int word1_size,word2_size;
    //loop for taking input from user
  while(count<no_testcase)
    {
        cin>>word1>>word2;
        //convertin word1
          for (int i=0;i<word1.length();i++)
          {
        if ('a'<=word1[i] && word1[i]<='z'){
           word1[i]=char(((int)word1[i])-32);
        }
 
        if ('A'<=word1[i] && word1[i]<='Z'){
           word1[i]=char(((int)word1[i])+32);
        } }
           //converting word2
             for (int i=0;i<word2.length();i++)
          {
        if ('a'<=word2[i] && word2[i]<='z'){
           word2[i]=char(((int)word2[i])-32);
        }
 
        if ('A'<=word2[i] && word2[i]<='Z'){
           word2[i]=char(((int)word2[i])+32);
        } }
      
        word1_size=word1.length();
        word2_size=word2.length();
 if(word1_size==word2_size)
        {
          flag[count] = issame(word1,word2,word1_size);
       }
       else flag[count]=0;
        count++;
   
    }
    //loop for output
    count=0;
    while(count2<no_testcase)
    {
        if(flag[count2]!=0)
        {
            cout<<"Yes"<<endl;
            count2++;
        }
        else 
        {
            cout<<"No"<<endl;
            count2++;
            
        }
        
    } count2=0;
 
    return 0;
}
