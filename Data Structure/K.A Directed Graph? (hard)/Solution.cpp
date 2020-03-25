#include <iostream>
#include<vector>
using namespace std;
bool Is_dir(vector<vector<bool>>adj_matrix,int n,int m)
{
    int count=0;
    for(int i=0;i<n;i++)
    { for(int j=0;j<n;j++)
        if(adj_matrix[i][j]==1&&adj_matrix[j][i]==1)
       {
        count++;
       }
    }
    if(count==m)
    {
        return false;
    }
    else{return true;}
    
    
}
int main()
{
   int n , m;
   cin>>n>>m; 
   //n no of vertices m no of edges
   vector<vector<bool>> adj_matrix (n , vector<bool> (n , 0));
   int a,b; 
   for ( int i =0; i<m ; i++)
   {
       cin>>a>>b ; 
   adj_matrix [a] [b] = 1;
       
   }
   if(Is_dir(adj_matrix,n,m)==false ) //means no edges
   {
       cout<<"BOTH"<<endl;
   }
   else{
       cout<<"DIR"<<endl;
   }
 
 return 0;
}
