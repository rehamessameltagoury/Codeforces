#include<iostream>
#include<stack>
#include<string>
using namespace std;
// Function to check whether two characters are opening 
// and closing of same type. 
bool ArePair(char opening,char closing)
{
	 if((opening == '[' && closing == ']') ||
	(opening == '<' && closing == '>')||
	(opening == '{' && closing == '}')||
	(opening == '(' && closing == ')')) return true;
	
	return false;
}
int AreParanthesesBalanced(string expression)
{
	stack<char>  S;
	int counter=0;
	for(int i =0;i<expression.length();i++)
	{
		if(expression[i] == '(' || expression[i] == '{' || expression[i] == '['||expression[i] == '<')
			S.push(expression[i]); //7oteh fl stack
		else if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']' || expression[i] == '>')
		{
			if(S.empty() || !ArePair(S.top(),expression[i]))
				return counter=0;
			else
				S.pop();
		}
	}
	return counter=S.empty()?1:0;
}
 
int main()
{
    int no_testcases;
    cin>>no_testcases;
    int counter=0;
    int counter_out=0;
    int array[1000];
    string expression;
    while(counter<no_testcases){
	cin>>expression;
	array[counter]=AreParanthesesBalanced(expression);
	counter++;}
	while(counter_out<no_testcases){
	if(array[counter_out]==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
		counter_out++;
	    
	}
	return 0;
}
