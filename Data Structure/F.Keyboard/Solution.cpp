#include <iostream>
#include <list>
#include<string>
using namespace std;
int main() {     
    
    string pass;
    cin>>pass; 
    list<char> l_1; 
    list<char> l_2;
    for ( int i = 0 ; i < pass.length() ; i++)
    {  
        if (pass[i] == '-') 
        { if (!l_1.empty()) 
           {
               l_1.pop_back(); 
           } 
        }  
        else if (pass[i] != '<' && pass[i]!= '>') 	
        {  l_1.push_back(pass[i]);
        } 	
        else if (pass[i] == '<' && l_1.empty()!=true) 
        { 
            char letter = l_1.back();
            l_1.pop_back();
            l_2.push_back(letter);
            }
            else if (pass[i]=='>' && !l_2.empty() )
            {
                char letter = l_2.back(); 
                l_2.pop_back();
                l_1.push_back(letter); 	
                }
                }
                while ( !l_1.empty() )
                { 
                    cout << l_1.front(); 
                    l_1.pop_front(); 	
                    
                }   
                l_2.reverse(); 
                while ( !l_2.empty() ) 
                {
                    cout << l_2.front(); 
                    l_2.pop_front();
                    }
    return 0;
                    }
