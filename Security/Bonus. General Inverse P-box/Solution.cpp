#include <iostream>
     
    using namespace std;
     
    int main()
    {
        int p_in;
        int P_out;
        cin>>p_in;
        cin>>P_out;
        int *P_box=new int [P_out];
        int *p_box_new=new int [p_in];
        for(int i=0;i<P_out;i++)
        {
            cin>>P_box[i];
        }
          
        if(p_in>P_out){cout<<"IMPOSSIBLE"<<endl;return 0;}
           // lo ana md5la 16 yb2a lazm elarkam tb2a mn 1 le 16 mwgoda
        int found=1;
        int i=p_in;
         int irv=0;
         
      while(i!=1){
       for(int j=0;j<P_out;j++)
       { //mn 1 le p_in mwgod
        
        
             if(P_box[j]==i)
             {
                 found++;
                 i--;
                 break;
              
             }
         
        
        
       }
          if(i==p_in){break;}
      }
       if(found==p_in){irv=0;}
       else irv=1;
          
        /***start to make the p box***/
        for(int i=0;i<p_in;i++)
        {
            for(int j=0;j<P_out;j++)
                {
                   if(P_box[j]==(i+1)){p_box_new[i]=j+1;break;} 
                }
            
        }
           if(irv!=1){for(int i=0;i<p_in;i++){cout<<p_box_new[i]<<" ";}cout<<"\n";}
       else cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
