#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int s;        //size of Permutation Box
     int n;//size of output
    string message;
    cin>>s;
    //cout<<s;
    int *prem_box=new int[s];
    for(int i=0;i<s;i++)
    {
        cin>>prem_box[i];
        //cout<<prem_box[i];
    }
    cin>>n;
   cin>>message;
    string message_bin="";
    string output="";
    for(int i=0;i<s;i++)
    {  //convert hex into bin
        if(message[i]=='0'){message_bin+="0000";}
        else if(message[i]=='1'){message_bin+="0001";}
        else if(message[i]=='2'){message_bin+="0010";}
        else if(message[i]=='3'){message_bin+="0011";}
        else if(message[i]=='4'){message_bin+="0100";}
        else if(message[i]=='5'){message_bin+="0101";}
        else if(message[i]=='6'){message_bin+="0110";}
        else if(message[i]=='7'){message_bin+="0111";}
        else if(message[i]=='8'){message_bin+="1000";}
        else if(message[i]=='9'){message_bin+="1001";}
        else if(message[i]=='A'){message_bin+="1010";}
        else if(message[i]=='B'){message_bin+="1011";}
        else if(message[i]=='C'){message_bin+="1100";}
        else if(message[i]=='D'){message_bin+="1101";}
        else if(message[i]=='E'){message_bin+="1110";}
        else if(message[i]=='F'){message_bin+="1111";}
    }
    for(int j=0;j<s;j++)
    {
        int index=prem_box[j]-1;
        output+=message_bin[index];
    }
    //convert binary to hex
    string out_hex="";
   for(int i=0;i<output.length();i+=4)
   {
       if(output[i]=='0'&output[i+1]=='0'&output[i+2]=='0'&output[i+3]=='0'){out_hex.push_back('0');}
        else if(output[i]=='0'&output[i+1]=='0'&output[i+2]=='0'&output[i+3]=='1'){out_hex.push_back('1');}
        else  if(output[i]=='0'&output[i+1]=='0'&output[i+2]=='1'&output[i+3]=='0'){out_hex.push_back('2');}
        else if(output[i]=='0'&output[i+1]=='0'&output[i+2]=='1'&output[i+3]=='1'){out_hex.push_back('3');}
        else  if(output[i]=='0'&output[i+1]=='1'&output[i+2]=='0'&output[i+3]=='0'){out_hex.push_back('4');}
        else  if(output[i]=='0'&output[i+1]=='1'&output[i+2]=='0'&output[i+3]=='1'){out_hex.push_back('5');}
        else  if(output[i]=='0'&output[i+1]=='1'&output[i+2]=='1'&output[i+3]=='0'){out_hex.push_back('6');}
        else  if(output[i]=='0'&output[i+1]=='1'&output[i+2]=='1'&output[i+3]=='1'){out_hex.push_back('7');}
        else  if(output[i]=='1'&output[i+1]=='0'&output[i+2]=='0'&output[i+3]=='0'){out_hex.push_back('8');}
        else  if(output[i]=='1'&output[i+1]=='0'&output[i+2]=='0'&output[i+3]=='1'){out_hex.push_back('9');}
        else  if(output[i]=='1'&output[i+1]=='0'&output[i+2]=='1'&output[i+3]=='0'){out_hex.push_back('A');}
        else  if(output[i]=='1'&output[i+1]=='0'&output[i+2]=='1'&output[i+3]=='1'){out_hex.push_back('B');}
        else  if(output[i]=='1'&output[i+1]=='1'&output[i+2]=='0'&output[i+3]=='0'){out_hex.push_back('C');}
        else  if(output[i]=='1'&output[i+1]=='1'&output[i+2]=='0'&output[i+3]=='1'){out_hex.push_back('D');}
        else  if(output[i]=='1'&output[i+1]=='1'&output[i+2]=='1'&output[i+3]=='0'){out_hex.push_back('E');}
        else  if(output[i]=='1'&output[i+1]=='1'&output[i+2]=='1'&output[i+3]=='1'){out_hex.push_back('F');}
   }
   cout<<out_hex<<endl;
 
    return 0;
}
 
