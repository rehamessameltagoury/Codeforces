/******************************************************************************
 
                              D. Hill Cipher
 
*******************************************************************************/
 
#include <iostream>
#include <string>
#include <math.h> 
using namespace std;
string message_prepare(string txttoencrypt,int size)
{
    //step 2:prepare the message
     
     while((txttoencrypt.length()%size)!=0)
     { //add X to the END 
       txttoencrypt+='X';
     }
     return txttoencrypt;
}
int main()
{
     long long int key_len;
   
    string txttoencrypt1="";
   
    cin>>key_len;
     long long int size;
     size=sqrt(key_len);
      //step 1:PUT KEY INTO A MATRIX
    long long  **key_matrix=new long long*[size];
    for(int i=0;i<size;i++)
    {
        key_matrix[i]=new long long[size];
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>key_matrix[i][j];
            //cout<<key_matrix[i][j]<<endl;
        }
        
    }
     cin>>txttoencrypt1;
   
    
    
   
     string txttoencrypt= message_prepare(txttoencrypt1,size);
     //cout<<txttoencrypt<<endl;
     string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     long long *message_index=new long long[txttoencrypt.length()];
     //STEP3:CONVERT THE MESSAGE INTO ARRAY OF NUMBERS
     for(long long int j=0;j<txttoencrypt.length();j++)
     {
        for(long long int i=0;i<alpha.length();i++)
        {
           if(txttoencrypt[j]==alpha[i])
           {
             message_index[j]=i;
             //cout<<message_index[j];
             break;
            }
        } 
         
     }
     //step 4:APLLY THE EQUATION
     long long int index=0;
     int k=0;
    long long *txt_index=new long long[txttoencrypt.length()];
     string hillcipher="";
    long long int count=0;
     
     while(k!=txttoencrypt.length()){
         
      for(long long int i=0;i<size;i++)
     { //rows
       
        index=count;
        txt_index[k]=0;
         for(long long int j=0;j<size;j++)
         { //columns
         
             txt_index[k]+=key_matrix[i][j]*message_index[index];
             
             index++;
            
                 
         }
         txt_index[k]%=26;
         
        
         hillcipher.push_back(alpha[txt_index[k]]);
         k++;
         //index=0;
         
     }
     count=k; 
     }
     cout<<hillcipher<<endl;
     
    return 0;
}
 
