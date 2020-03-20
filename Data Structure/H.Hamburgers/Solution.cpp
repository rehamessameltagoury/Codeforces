#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sandwich;
    long long int nb,ns,nc;
    long long int pb,ps,pc;
    long long int r;
    long long int count_bread=0,count_sausge=0,count_cheese=0;
    long long int sandwich_count=0;
    cin>>sandwich;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    long long int sandwich_price;
    int flag_have=0,flag1=0;
    for(int i =0; i<sandwich.length();i++)
    { //number of bread,sausage,cheese in the recipe
        if(sandwich[i]=='B')
        {
            count_bread++;
        }
        else if(sandwich[i]=='S'){
            count_sausge++;
        }
        else if(sandwich[i]=='C')
        {
            count_cheese++;
        }
    }
       sandwich_price=count_bread*pb + count_sausge*ps+count_cheese*pc; //price of one sandwich
       int flag=1;
       flag1=(count_bread>0)+(count_cheese>0)+(count_sausge>0); //m3aya 7gat wla la
    //3yza 23rf dr 23ml kam sandwich within range elflos bt3ty
    //lo already m3aya kda ana msh hshtry
    // lo msh m3ya hshtry 
	while(r>0)
	{
		if((nb||nc||ns)&& flag)
		{
			int flagB=0,flagC=0,flagS=0;
			if(nb>=count_bread) {nb-=count_bread;
			flagB=1;} //lo ely m3aya akbr mn el3dd kda msh m7taga ashtry
			else
            { //lazem ashtry
                int ing=count_bread-nb; nb=0;
                if(r>=ing*pb) {r-=ing*pb;
                flagB=1;}
                else break;
            }
 
            if(nc>=count_cheese) nc-=count_cheese,flagC=1;
            else
            {
				int ing=count_cheese-nc; nc=0;
                if(r>=ing*pc){ r-=ing*pc;
                flagC=1;}
                else break;
            }
 
            if(ns>=count_sausge) ns-=count_sausge,flagS=1;
            else
            {
                int ing=count_sausge-ns; ns=0;
                if(r>=ing*ps){ r-=ing*ps;
                flagS=1;
                }
                else break;
            }
            flag_have=(nb==0)+(nc==0)+(ns==0); // ana 5lst 7gty
            if(flag_have==flag1) flag=0;
            if(flagB==1&&flagC==1&&flagS==1) sandwich_count++;
            else break;
        }
        else
        {
            sandwich_count+=r/sandwich_price;
            break;
        }
    }
    
  
   cout<<sandwich_count<<endl;
 
}
