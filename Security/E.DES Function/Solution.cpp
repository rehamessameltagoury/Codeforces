#include <iostream>
#include <string>
using namespace std;
string hextobin(string message)
{   string message_bin="";
    
    for(int i=0;i<message.length();i++)
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
    
    
    return message_bin;
}
string bintohex(string output)
{//convert binary to hex
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
   return out_hex;
    
}
int bintodec(string pos_c)
{
    int col;
    //convert pos_c to decimal
if(pos_c[0]=='0'&pos_c[1]=='0'&pos_c[2]=='0'&pos_c[3]=='0'){col=0;}
else if(pos_c[0]=='0'&pos_c[1]=='0'&pos_c[2]=='0'&pos_c[3]=='1'){col=1;}
else if(pos_c[0]=='0'&pos_c[1]=='0'&pos_c[2]=='1'&pos_c[3]=='0'){col=2;}
else if(pos_c[0]=='0'&pos_c[1]=='0'&pos_c[2]=='1'&pos_c[3]=='1'){col=3;}
else if(pos_c[0]=='0'&pos_c[1]=='1'&pos_c[2]=='0'&pos_c[3]=='0'){col=4;}
else if(pos_c[0]=='0'&pos_c[1]=='1'&pos_c[2]=='0'&pos_c[3]=='1'){col=5;}
else if(pos_c[0]=='0'&pos_c[1]=='1'&pos_c[2]=='1'&pos_c[3]=='0'){col=6;}
else if(pos_c[0]=='0'&pos_c[1]=='1'&pos_c[2]=='1'&pos_c[3]=='1'){col=7;}
else if(pos_c[0]=='1'&pos_c[1]=='0'&pos_c[2]=='0'&pos_c[3]=='0'){col=8;}
else if(pos_c[0]=='1'&pos_c[1]=='0'&pos_c[2]=='0'&pos_c[3]=='1'){col=9;}
else if(pos_c[0]=='1'&pos_c[1]=='0'&pos_c[2]=='1'&pos_c[3]=='0'){col=10;}
else if(pos_c[0]=='1'&pos_c[1]=='0'&pos_c[2]=='1'&pos_c[3]=='1'){col=11;}
else if(pos_c[0]=='1'&pos_c[1]=='1'&pos_c[2]=='0'&pos_c[3]=='0'){col=12;}
else if(pos_c[0]=='1'&pos_c[1]=='1'&pos_c[2]=='0'&pos_c[3]=='1'){col=13;}
else if(pos_c[0]=='1'&pos_c[1]=='1'&pos_c[2]=='1'&pos_c[3]=='0'){col=14;}
else if(pos_c[0]=='1'&pos_c[1]=='1'&pos_c[2]=='1'&pos_c[3]=='1'){col=15;}
return col;
}
 
int main()
{
    string key_32;
    string key_48;
    
    cin>>key_32;
    cin>>key_48;
    //8 Hex characters that represent the 32-bit input block.
    string key_32_bin="";
    int len=key_32.length();
    key_32_bin=hextobin(key_32);
    //12 Hex characters that represent the 48-bit key block that is also an input to the function.
    string key_48_bin=hextobin(key_48);
    int ep_box[8][6]={{32,1,2,3,4,5},{4,5,6,7,8,9},{8,9,10,11,12,13},{12,13,14,15,16,17},{16,17,18,19,20,21},{20,21,22,23,24,25},
        {24,25,26,27,28,29},{28,29,30,31,32,1}
    };
    int s_box[4][8]={{16,7,20,21,29,12,28,17},{1,15,23,26,5,18,31,10},{2,8,24,14,32,27,3,9},{19,13,30,6,22,11,4,25}};
    
    int s1[4][16] = {{14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7},
   {0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8},
   {4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0},
   {15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13}};
   
    int s2[4][16] = {{15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10},
   {3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5},
   {0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15},
   {13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9}};
   
    int s3[4][16] = {{10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8},
   {13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1},
   {13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7},
   {1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12}};
   
   int s4[4][16] = {{7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15},
   {13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9},
   {10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4},
   {3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14}};
   
    int s5[4][16] = {{2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9},
   {14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6},
   {4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14},
   {11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3}};
   
    int s6[4][16] = {{12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11},
   {10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8},
   {9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6},
   {4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13}};
   
        int s7[4][16] = {{4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1},
   {13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6},
   {1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2},
   {6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12}};
   
    int s8[4][16] = {{13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7},
   {1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2},
   {7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8},
   {2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11}};
    
    //expansion premutation box
    string out_ep_box="";
     for(int j=0;j<8;j++)
    { //rows
       for(int i=0;i<6;i++)
       { //columns
         int index=ep_box[j][i]-1;
         out_ep_box+=key_32_bin[index];
           
       }
    }
    //output is XORED with 48 key
    string output_Xor="";
    int val=0;
    for(int i=0;i<48;i++)
    {
        val=out_ep_box[i]^key_48_bin[i];
       if(val==1){output_Xor+='1';}
       else output_Xor+='0';
        
    }
    //23dy eloutput 3la el8Sboxes
    string b1,b2,b3,b4,b5,b6,b7,b8;
int i;
for( i=0;i<6;i++)
{
    b1.push_back(output_Xor[i]);
}
for(i=6;i<12;i++)
{
    b2.push_back(output_Xor[i]);
}
for(i=12;i<18;i++)
{
    b3.push_back(output_Xor[i]);
}
for(i=18;i<24;i++)
{
    b4.push_back(output_Xor[i]);
}
for(i=24;i<30;i++)
{
    b5.push_back(output_Xor[i]);
}
for(i=30;i<36;i++)
{
    b6.push_back(output_Xor[i]);
}
for(i=36;i<42;i++)
{
    b7.push_back(output_Xor[i]);
}
for(i=42;i<48;i++)
{
    b8.push_back(output_Xor[i]);
}
//h5d awl bit w 25r bit de kda elrow w ely fl ns dh elcolumn
int arr[8]; //array hsgl feh eldecimal char
int row;
int col;
string pos_r="";
string pos_c="";
          pos_r+=b1[0];
       pos_r+=b1[5];
 
  pos_c+=b1[1];
pos_c+=b1[2];
pos_c+=b1[3];
pos_c+=b1[4];
//convert pos_r to eldecimal
if(pos_r[0]=='0'&pos_r[1]=='0'){row=0;}
else if(pos_r[0]=='0'&pos_r[1]=='1'){row=1;}
else if(pos_r[0]=='1'&pos_r[1]=='0'){row=2;}
else if(pos_r[0]=='1'&pos_r[1]=='1'){row=3;}
col=bintodec(pos_c);
arr[0]=s1[row][col];
pos_r.clear();
pos_c.clear();
// b2
pos_r+=b2[0];
       pos_r+=b2[5];
 
  pos_c+=b2[1];
pos_c+=b2[2];
pos_c+=b2[3];
pos_c+=b2[4];
//convert pos_r to eldecimal
if(pos_r[0]=='0'&pos_r[1]=='0'){row=0;}
else if(pos_r[0]=='0'&pos_r[1]=='1'){row=1;}
else if(pos_r[0]=='1'&pos_r[1]=='0'){row=2;}
else if(pos_r[0]=='1'&pos_r[1]=='1'){row=3;}
col=bintodec(pos_c);
//i know mkan elcol w elrow
arr[1]=s2[row][col];
pos_r.clear();
pos_c.clear();
// b3
pos_r+=b3[0];
       pos_r+=b3[5];
 
  pos_c+=b3[1];
pos_c+=b3[2];
pos_c+=b3[3];
pos_c+=b3[4];
//convert pos_r to eldecimal
if(pos_r[0]=='0'&pos_r[1]=='0'){row=0;}
else if(pos_r[0]=='0'&pos_r[1]=='1'){row=1;}
else if(pos_r[0]=='1'&pos_r[1]=='0'){row=2;}
else if(pos_r[0]=='1'&pos_r[1]=='1'){row=3;}
col=bintodec(pos_c);
//i know mkan elcol w elrow
arr[2]=s3[row][col];
pos_r.clear();
pos_c.clear();
// b4
pos_r+=b4[0];
       pos_r+=b4[5];
 
  pos_c+=b4[1];
pos_c+=b4[2];
pos_c+=b4[3];
pos_c+=b4[4];
//convert pos_r to eldecimal
if(pos_r[0]=='0'&pos_r[1]=='0'){row=0;}
else if(pos_r[0]=='0'&pos_r[1]=='1'){row=1;}
else if(pos_r[0]=='1'&pos_r[1]=='0'){row=2;}
else if(pos_r[0]=='1'&pos_r[1]=='1'){row=3;}
col=bintodec(pos_c);
//i know mkan elcol w elrow
arr[3]=s4[row][col];
pos_r.clear();
pos_c.clear();
// b5
pos_r+=b5[0];
       pos_r+=b5[5];
 
  pos_c+=b5[1];
pos_c+=b5[2];
pos_c+=b5[3];
pos_c+=b5[4];
//convert pos_r to eldecimal
if(pos_r[0]=='0'&pos_r[1]=='0'){row=0;}
else if(pos_r[0]=='0'&pos_r[1]=='1'){row=1;}
else if(pos_r[0]=='1'&pos_r[1]=='0'){row=2;}
else if(pos_r[0]=='1'&pos_r[1]=='1'){row=3;}
col=bintodec(pos_c);
//i know mkan elcol w elrow
arr[4]=s5[row][col];
pos_r.clear();
pos_c.clear();
// b6
pos_r+=b6[0];
       pos_r+=b6[5];
 
  pos_c+=b6[1];
pos_c+=b6[2];
pos_c+=b6[3];
pos_c+=b6[4];
//convert pos_r to eldecimal
if(pos_r[0]=='0'&pos_r[1]=='0'){row=0;}
else if(pos_r[0]=='0'&pos_r[1]=='1'){row=1;}
else if(pos_r[0]=='1'&pos_r[1]=='0'){row=2;}
else if(pos_r[0]=='1'&pos_r[1]=='1'){row=3;}
//convert pos_c to decimal
col=bintodec(pos_c);
//i know mkan elcol w elrow
arr[5]=s6[row][col];
pos_r.clear();
pos_c.clear();
// b7
pos_r+=b7[0];
       pos_r+=b7[5];
 
  pos_c+=b7[1];
pos_c+=b7[2];
pos_c+=b7[3];
pos_c+=b7[4];
//convert pos_r to eldecimal
if(pos_r[0]=='0'&pos_r[1]=='0'){row=0;}
else if(pos_r[0]=='0'&pos_r[1]=='1'){row=1;}
else if(pos_r[0]=='1'&pos_r[1]=='0'){row=2;}
else if(pos_r[0]=='1'&pos_r[1]=='1'){row=3;}
//convert pos_c to decimal
col=bintodec(pos_c);
//i know mkan elcol w elrow
arr[6]=s7[row][col];
pos_r.clear();
pos_c.clear();
// b8
pos_r+=b8[0];
       pos_r+=b8[5];
 
  pos_c+=b8[1];
pos_c+=b8[2];
pos_c+=b8[3];
pos_c+=b8[4];
//convert pos_r to eldecimal
if(pos_r[0]=='0'&pos_r[1]=='0'){row=0;}
else if(pos_r[0]=='0'&pos_r[1]=='1'){row=1;}
else if(pos_r[0]=='1'&pos_r[1]=='0'){row=2;}
else if(pos_r[0]=='1'&pos_r[1]=='1'){row=3;}
//convert pos_c to decimal
col=bintodec(pos_c);
//i know mkan elcol w elrow
arr[7]=s8[row][col];
 
pos_r.clear();
pos_c.clear();
//convert array into bin
 
string binary_out_8S_box="";
int bin=0;
for(int i=0;i<7;i++)
{
   if(arr[i]==0){binary_out_8S_box+="0000";}
   else if(arr[i]==1){binary_out_8S_box+="0001";}
   else if(arr[i]==2){binary_out_8S_box+="0010";}
   else if(arr[i]==3){binary_out_8S_box+="0011";}
   else if(arr[i]==4){binary_out_8S_box+="0100";}
   else if(arr[i]==5){binary_out_8S_box+="0101";}
   else if(arr[i]==6){binary_out_8S_box+="0110";}
   else if(arr[i]==7){binary_out_8S_box+="0111";}
   else if(arr[i]==8){binary_out_8S_box+="1000";}
   else if(arr[i]==9){binary_out_8S_box+="1001";}
   else if(arr[i]==10){binary_out_8S_box+="1100";}
   else if(arr[i]==11){binary_out_8S_box+="1101";}
   else if(arr[i]==12){binary_out_8S_box+="1100";}
   else if(arr[i]==13){binary_out_8S_box+="1101";}
   else if(arr[i]==14){binary_out_8S_box+="1110";}
   else if(arr[i]==15){binary_out_8S_box+="1111";}
   
  
}
    //b3d kda 23deh 3la s_box
    string output="";
    string out_hex;
   
    for(int i=0;i<4;i++)
    { //rows
        for(int j=0;j<8;j++)
        {//columns
          int value =s_box[i][j]-1;
          if(binary_out_8S_box[value]=='1')output.push_back('1');
          else output.push_back('0');
          
        }
    }
    for(int i=0;i<32;i+=4)
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
    //output int hex
    cout<<out_hex<<endl;
    return 0;
}
