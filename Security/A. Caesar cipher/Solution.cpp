 
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    long long int key;
    string input;
    int Encrypted_index;
    cin>>key;
    cin>>input;
    string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string output="";
    for(int i=0;i<input.length();i++)
    {
        for(int j=0;j<alpha.length();j++)
        {
            if(input[i]==alpha[j])
            {  //index is found
               Encrypted_index=(j+key)%26;
              output+=alpha[Encrypted_index]; 
                
            }
        }
    }
    cout<<output<<endl;
 
    return 0;
}
