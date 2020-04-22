/******************************************************************************
 
                              B.playfair
 
*******************************************************************************/
 
#include <iostream>
#include<iterator> 
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string new_alpha(string key)
{
     int index;
      string::iterator it;
     string alpha="ABCDEFGHIKLMNOPQRSTUVWXYZ";
    //BEFORE FILLING WE SHOULD SUBTRACT THE WORD FROM alpha
    for(int k=0;k<key.length();k++)
    {
        for(index=0;index<alpha.length();index++){
        if(alpha[index]==key[k])
        {
             it=alpha.begin()+index;
	         alpha.erase (it);
            
            
        }}
    }
    return alpha;
}
string message_ready(string message)
{     
    // I NEED TO ADD X
    //any j will be an I
    for(int i=0;i<message.length();i++)
    { 
        if(message[i]=='J')
        {
            message[i]='I';
            
        }
        
    }
    
       for(int f=0;f<message.length();f+=2)
       {
           
        if(message[f]!='X'&message[f+1]!='X'){
            //MFESH TWO CONSECUTIVE Xs
            
            if(message[f]==message[f+1])
          { //put x between THEM
             message.insert(f+1,1,'X');
 
          }
            
        }
        else
        {  
            if(message[f]==message[f+1])
          { //put x between THEM
             message.insert(f+1,1,'Q');
             
            
 
          }
        }
       }
       if( message.length()%2!=0)//IF THE MESSAGE HAVE ODD NO OF LETTERS ADD X AND MAKE IT EVEN
          {//it is ODD add x
           
            if(message[message.length()-1]=='X')message+='Q';
            else message+='X';
          }
        
    
    
    return message;
}
bool is_exist(string str,char g)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==g)return 1;
        
    }
    return 0;
}
string key_ready(string key)
{
     
      //string::iterator it;
    string HJ="";
    int k=0;
 
      //int j=0;
    //BEFORE FILLING WE SHOULD SUBTRACT THE REPEATED LETTERS
     for(int i=0;i<key.length();i++)
    {  //every J is turned into I
        if(key[i]=='J')
        {key[i]='I';}
        
    }
     HJ.push_back(key[0]);
    for(int i=0;i<key.length();i++)
    {  //every J is turned into I
        //if(!HJ.find(key[i])){HJ.push_back(key[i]);}
        if(!is_exist(HJ,key[i])){HJ.push_back(key[i]);}
    }
    
   
    return HJ;
}
int main()
{   string key_user,message;
    cin>>key_user;
    cin>>message;
    //construct 5*5 matrix
    int i=0,j=0,index=0;
    char playfair[5][5];
   //alphabetic without the key
   // int n = sizeof(key_user) / sizeof(key_user[0]);
   string key=key_ready(key_user);
  //cout<<key<<endl;
   //string alpha="";
   //BCRAKGHIQXFWFSSEQSCMUVXYVWXS
  // cout<<alpha<<endl;
    
     //to fill the matrix WITH THE KEY
     
     
      for(int k=0;k<key.length();k++)
       {  
           playfair[i][j]=key[k];
           j++;
           if(j==5)
           {  //25r column lazm an2l row 
               i++;
               j=0;
           }
       }
       //FILL THE MATRIX WITH THE REST OF alpha
       string alpha=new_alpha(key);
        for(int index=0;index<alpha.length();index++)
        {  //char y =alpha[index];
            playfair[i][j]=alpha[index];
            //char z=playfair[i][j];
            if(i!=5&j!=5){j++;}
            if(j==5&i!=5){i++;j=0;}
            if(i==5&j==5){break;}
        }
      string ready_message=message_ready(message);
     //cout<<ready_message<<endl;
        int index_1=0;
         int index_2=0;
          int index_3=0; int index_4=0;
        string playfair_output="";
        int found1=0,found2=0;
        //trying to find the letters in playfair MATRIX
        for(int k=0;k<ready_message.length();k+=2)
        { //taking two letters to look for it  
           for(int i=0;i<5;i++)
          {//rows
             for(int j=0;j<5;j++)
               {//columns
                //char x=playfair[i][j];
                //char y=ready_message[k];
                //char z=ready_message[k+1];
                    if(playfair[i][j]==ready_message[k]){
                        index_1=j;
                        index_2=i;
                        found1=1;
                    }
                    if(playfair[i][j]==ready_message[k+1]){
                        index_3=j;
                        index_4=i;
                        found2=1;
                    }
                if(found2&found1){break;}    
               }
               if(found2&found1){found1=0;found2=0;break;} 
           }
          //encrypion of first two letters
          if(index_2==index_4)
          {//same row
           if(index_1==4){ playfair_output.push_back(playfair[index_2][0]);
           playfair_output.push_back(playfair[index_4][index_3+1]);continue;}
          else if(index_3==4){
          playfair_output.push_back(playfair[index_2][index_1+1]);
              playfair_output.push_back(playfair[index_4][0]);continue;
          }
          else{   playfair_output.push_back(playfair[index_2][index_1+1]); 
      
             playfair_output.push_back(playfair[index_4][index_3+1]);
             continue;
             
          } 
          }
          else if(index_1==index_3)
          {//same column
           if(index_2==4){ 
               playfair_output.push_back(playfair[0][index_1]); playfair_output.push_back(playfair[index_4+1][index_3]);continue;}
           if(index_4==4){
               playfair_output.push_back(playfair[index_2+1][index_1]);
               playfair_output.push_back(playfair[0][index_3]);continue;
           }
            else{ playfair_output.push_back(playfair[index_2+1][index_1]); 
             playfair_output.push_back(playfair[index_4+1][index_3]);
                continue;
            } 
          }
          else 
          { //not same column or row
             playfair_output.push_back(playfair[index_2][index_3]);
             //cout<<playfair_output<<endl;
             playfair_output.push_back(playfair[index_4][index_1]);  
             continue;
             //cout<<playfair_output<<endl;
          }
        }    
          cout<<playfair_output<<endl;  
            
        
      
    
 
 
    return 0;
}
