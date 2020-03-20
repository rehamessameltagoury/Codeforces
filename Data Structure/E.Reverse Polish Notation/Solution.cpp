#include <stack>
#include<iostream>
#include<string>
using namespace std; 
int applyOp(int a, int b,int c, char op){ 
    //evaluating the operations
    int sol;
	switch(op){ 
		case '+':  sol=a+b;
		         return sol; 
		case '-': sol=a-b;
		         return sol;
		case '*': sol=a*b;
		         return sol; 
		case '/': sol=a/b;
		         return sol; 
		case 'x': sol=a*a+b;
		         return sol;
		case 'y':sol=2*a + 1;
		         return sol;
	 
		case 'z': sol=a+ 2*b + 3*c;
		         return sol;
	 
	} 
} 
void distributing_evaluate(string expression){ 
	int i; 
	int result;
 
	// stack to store integer values. 
	stack <int> values; 
		int val1;
		int val2;
		int val3;
	    int neg_flag=0;
	    int number_values=0;
	    int number_push=0;
	    
		//for loop for distributing
	for(i = 0; i < expression.length(); i++)
	{ 
		
		// Current expression has a whitespace, 
		// skip it. 
		if(expression[i] == ' ') 
			continue; 
		//if it has any operator put it in operator stack
	
		else if((expression[i+1]==' '||i==expression.length()-1)&&!values.empty()&&values.size()>=2 &&(expression[i] == '+'||expression[i] == '-'||expression[i] == '*'||expression[i] == '/'||expression[i] == 'x'))
		{   //if(number_values<2) return 1;
		//cout<<values.size()<<endl;
		 
		    number_values=0;
		    number_push=0;
			val2 = values.top(); 
				values.pop(); 
				if(val2==0&&expression[i]=='/') {cout<<"NO"<<endl; return;}
			val1 = values.top(); 
				values.pop();	
			values.push(applyOp(val1, val2,0, expression[i])); 
		
		}
		else if(!values.empty()&&values.size()>=1&&expression[i] == 'y')
		{   //if(number_values<1) return 1;
		   number_values=0;
		   number_push=0;
			val1 = values.top(); 
				values.pop();	
			values.push(applyOp(val1, 0,0, expression[i]));
		
		} 
		 else if(!values.empty()&&values.size()>=3 &&expression[i] == 'z')
		{  //if(number_values<3) return 1;
		    number_values=0;
		    number_push=0;
		    val3 = values.top(); 
				values.pop();	
			val2 = values.top(); 
				values.pop();	
			val1 = values.top(); 
				values.pop();	
			values.push(applyOp(val1, val2,val3, expression[i]));
		
		} 
			// Current expression is a number, push  it to stack for numbers. 
		if(isdigit(expression[i]))
		{   int x = expression.length();
		   if(i==x-1&&!isdigit(expression[i])){cout<<"NO"<<endl;return;}
			int val = 0; 
		   if(expression[i-1]=='-')
		   {
		       neg_flag=1;
		   }	
			// There may be more than one 
			// digits in number. 
			while(i < expression.length() && 
						isdigit(expression[i])) 
			{ 
				val = (val*10) + (expression[i]-'0'); 
				//cout<<val<<endl;
				
				   if(expression[i+2]=='+'||expression[i+2]=='-'||expression[i+2]=='/'||expression[i+2]=='x'||expression[i+2]=='z'||expression[i+2]=='y')
		       {number_push++;}
 
				i++; 
			} 
		   if(neg_flag==1)
		   {
		       val*=-1;
		       neg_flag=0;
		       values.push(val);
		       number_values++;
		    
		   }
		else 	{
		    values.push(val);
		   number_values++;
		    
		} 
		    
		}
if(number_values==1&&values.size()==1&&i==expression.length()-1 && number_push==0
     		&&(expression[i]!='+'||expression[i]!='-'||expression[i]!='/'||expression[i]!='*'||expression[i]!='x'||expression[i]!='y'||expression[i]!='z')){
     		    result=values.top();
values.pop();
cout<<result<<endl;exit(0);} }
 
		 if (number_values==1 &&number_push==0)
{  result=values.top();
    values.pop();
    number_values=0;
cout<<result<<endl;exit(0);}
 
	    
	
			
	if(number_values!=0 &&number_push>=1 && values.size()==1){ cout<<"NO"<<endl;exit(0);}
else if(!values.empty()&&values.size()==1&&number_values==0) {result=values.top();
values.pop();
cout<<result<<endl;exit(0);}
else {cout<<"NO"<<endl; exit(0);}
	}
	
int main()	
{
    string expr;
    getline(cin,expr);
   distributing_evaluate(expr);
    return 0;
}
