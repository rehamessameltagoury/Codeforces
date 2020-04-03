#include <iostream>
 
using namespace std;
int binary(int value,int arr[],int left,int right)
{ 
    
    if(left==right)
    {   
      if (arr[left] != value) return 0;
		else 
		return 1;
    }
    int mid=(left+right)/2;
    if(arr[mid]>value)
    {
        for (int i = 0; i < mid; i++)
			{
				cout << arr[i] << " ";
			}
			cout << "\n";
			binary(value,arr, left, mid - 1);
        
    }
    else
    {
        if (arr[mid] == value) {
			 binary(value,arr, left, left);
		}
		else
		{
			for (int i = mid + 1; i < right + 1; i++)
			{
				cout << arr[i] << " ";
			}
			cout << "\n";
			binary(value,arr, mid + 1, right);
		}
    }
}
int main()
{
     
    int S,N;
   cin>>N;//number search
   cin>>S; //size
  	int* arry;
	arry = new int[S];
	for (int i = 0; i < S; i++)
	{
		cin >> arry[i];
	}
 	int result=binary(N, arry , 0 , S-1);
 
	if (result)
	{
 
		cout <<"YES";
	}
	else
		cout << "NO";
 
}
