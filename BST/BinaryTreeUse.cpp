
//  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦
//✦   ✦  ✦  ✦ Created by Shreyansh Raj Keshri.  ✦  ✦  ✦
//  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦

#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

/*
	■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■
	■■■■■■■■■■■■■■■■■■| Notes |■■■■■■■■■■■■■■■■■■■■■■■■■■
	■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

	◉ Binary Search Tree have max 2 child.

*/



int main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);

    root->left = node1;
    root->right = node2;

}