#include<bits/stdc++.h>
using namespace std;

struct treeNode{
	int data;
	treeNode left;
	treeNode right;
};

treeNode insert(treeNode root){
	
}

checkBST(treeNode root,int min,int max){
	if(root==NULL){
		return true;
	}
	
	if(root->data>min||root->data<max){
		return false;
	}
	return checkBST(root->left,min,root->data)&&checkBST(root->right,root->data,max);
}

int main(){
	
}
