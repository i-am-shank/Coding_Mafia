#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *takeInput(){
	int rootData;
	cin >> rootData;
	if(rootData == -1) {
		return NULL;
	}
	TreeNode *root = new TreeNode(rootData);
	queue<TreeNode*> q;
	q.push(root);
	while(!q.empty()) {
		TreeNode* front = q.front();
		q.pop();
		int leftData, rightData;
		cin >> leftData >> rightData;
		if(leftData != -1) {
			TreeNode* leftChild = new TreeNode(leftData);
			front->left = leftChild;
			q.push(leftChild);
		}
		if(rightData != -1) {
			TreeNode* rightChild = new TreeNode(rightData);
			front->right = rightChild;
			q.push(rightChild);
		}
	}
	return root;
}

void printTree(TreeNode* root) {
	if(root == NULL) {
		return;
	}
	queue<TreeNode*> q;
	q.push(root);
	while(!q.empty()) {
		TreeNode* front = q.front();
		q.pop();
		cout << front->val << " ";
		if(front->left != NULL) {
			q.push(front->left);
		}
		if(front->right != NULL) {
			q.push(front->right);
		}
	}
	cout << endl;
	return;
}

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
    	if(root==NULL  ||  (root->left==NULL && root->right==NULL)) {
    		return root;
    	}
        TreeNode* temp = invertTree(root->left);
        root->left = invertTree(root->right);
        root->right = temp;
        return root;
    }
};

int main() {
	Solution solve;
	TreeNode* root = takeInput();
	root = solve.invertTree(root);
	printTree(root);
	return 0;
}