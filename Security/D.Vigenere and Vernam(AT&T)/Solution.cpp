/******************************************************************************
 
                              E. Vigenere and Vernam(AT&T)
 
*******************************************************************************/
 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
 
int main()
{
    string message;
    string key;
    cin>>key;
    cin>>message;
   
    string key_message="";
    int key_len=key.length();
    int message_len=message.length();
    int Vigenere_output_index;
    string Vigenere_output;
    string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(key_len<=message_len)
    {
        for(int i=0;i<key.length();i++){
            if(key_message.length()==message_len){break;}
       key_message+=key[i];
    
            
        }
        if(key_message.length()==message_len){break;}
    }
    //encryption Vigenere
    for(int j=0;j<message_len;j++)
    { 
       Vigenere_output_index=(int(message[j]) +int(key_message[j]))% 26;
       //CHANGE INDEX TO ASCII
       
       //VSJKXGL
       Vigenere_output.push_back(alpha[Vigenere_output_index]);
        
    }
    cout<<"Vigenere: "<<Vigenere_output<<endl;
    /****Gilbert Vernam Cipher
    * XOR te key and message to get the vernam
    * OUTPUT HEX VALUE
    ****/
   int x;
    
    cout<<"Vernam: ";
    for(int i=0;i<message.length();i++)
    {  //170A0106110607
      x=((message[i])^(key_message[i]));
         cout<<setfill('0')<<setw(2)<<uppercase << hex<<x;
    }   
   
    cout<<"\n";
    //one timepad
    if(message_len==key_len)
    {
        cout<<"One-Time Pad: "<<"YES"<<endl;
    }
    else{cout<<"One-Time Pad: "<<"NO"<<endl;}
    
    return 0;
}
