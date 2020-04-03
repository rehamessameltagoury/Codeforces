 
#include <iostream>
 
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int d)
    { //constructor
        data=d;
        left=NULL;
        right =NULL;
    }
};
node* insertInBST(node* root, int x) {
	
		if (root == NULL) {
		node* tmp = new node(x);
	return tmp;
}
 
if (x < root->data) {
	root->left = insertInBST(root->left , x);
		return root;
	} else {
		root->right = insertInBST(root->right, x);
		return root;
	}
}
 
node* createBST(int arr[],int size) {
    node*root=NULL;
    for(int i=0;i<size;i++)
  {   
		root = insertInBST(root, arr[i]);
	
      
  }
	return root;
}
 
int height(node* node) 
{ 
	if(node == NULL) 
		return 0; 
	
	
	return 1 + max(height(node->left), 
				height(node->right)); 
} 
int max(int a, int b) 
{ 
	return (a >= b)? a: b; 
} 
bool isBalanced(node *root) 
{ 
	int left_h; /* for height of left subtree */
	int right_h; /* for height of right subtree */
	
 
	if(root == NULL) 
		return 1; 
	
 
	left_h = height(root->left); 
	right_h = height(root->right); 
	
	if( abs(left_h-right_h) <= 1 && 
		isBalanced(root->left) && 
		isBalanced(root->right)) 
		return 1; 
	
 
	return 0; 
} 
int main()
{
    int size;
    cin>>size;
    int *a=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    node *root=createBST(a,size);
    int height=0;
    if(isBalanced(root)==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
