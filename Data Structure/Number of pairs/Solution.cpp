#include <vector>
#include<iostream>
#include<algorithm>
#include <unordered_map> 
using namespace std; 
 
 
int getPairsCount(vector<int> arr, int sum, int n) 
{
    unordered_map<int, int> m; 
 
	// Store counts of all elements in map m 
	for (int i=0; i<n; i++) 
		m[arr[i]]++; 
 
	int twice_count = 0; 
 
	// iterate through each element and increment the 
	// count (Notice that every pair is counted twice) 
	for (int i=0; i<n; i++) 
	{ 
		twice_count += m[sum-arr[i]]; 
 
		// if (arr[i], arr[i]) pair satisfies the condition, 
		// then we need to ensure that the count is 
		// decreased by one such that the (arr[i], arr[i]) 
		// pair is not considered 
		if (sum-arr[i] == arr[i]) 
			twice_count--; 
	} 
 
	// return the half of twice_count 
	return twice_count/2; 
}
 
// Driver function to test the above function 
int main() 
{ 
  
  std::vector<int> arr ;
    int S,N;
   cin>>S>>N;
   int no;
   for(int i =0;i<S;i++)
   {
        cin>>no;
        arr.push_back(no);
   }
   //sort(arr.begin(),arr.end());
   int counter=getPairsCount(arr,N,S);
   cout<<counter<<endl;
  // delete [] arr;
} 
