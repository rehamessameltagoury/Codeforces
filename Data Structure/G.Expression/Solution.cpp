#include<iostream>
#include<stack>
#include<string>
#include<iostream>
using namespace std;
int maximum_result(int a, int b,int c)
{
	stack<int>  S;
int max_result=0;
 
//int array_results[100];
         max_result=(a+b*c);//90
         S.push(max_result);
         if((a*b*c)>S.top())
         { //729
            S.pop();
            max_result=a*b*c;
             S.push(max_result);
         }
          if((a*(b+c))>S.top()){
             //162
              S.pop();
            max_result=a*(b+c);
             S.push(max_result);
         }
          if(((a+b)*c)>S.top())
         { //162
              S.pop();
            max_result=(a+b)*c;
             S.push(max_result);
         }
           if((a+b+c)>S.top())
         {//27
              S.pop();
            max_result=a+b+c;
             S.push(max_result);
         }
           if((a*b+c)>S.top())
         {//90
              S.pop();
            max_result=a*b+c;
             S.push(max_result);
         }
            if(((a*b)+c)>S.top())
         { //90
              S.pop();
            max_result=(a*b)+c;
             S.push(max_result);
         }
              if((a+(b*c))>S.top())
         {//90
              S.pop();
            max_result=(a*b)+c;
             S.push(max_result);
         }
         
         
         S.pop();
        
 
	return max_result;
}
 
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int max_result=0;
    max_result=maximum_result(a,b,c);
    cout<<max_result<<endl;
    //cout<<a<<b<<c;
    
	return 0;
}
