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

TreeNode *takeInput() {
	int rootData;
	cin >> rootData;
	if(rootData == -1) {
		return NULL;
	}
	queue<TreeNode*> q;
	TreeNode* root = new TreeNode(rootData);
	q.push(root);
	while(!q.empty()) {
		TreeNode *front = q.front();
		q.pop();
		int leftData, rightData;
		cin >> leftData;
		if(leftData != -1) {
			TreeNode *leftChild = new TreeNode(leftData);
			front->left = leftChild;
			q.push(leftChild);
		}
		cin >> rightData;
		if(rightData != -1) {
			TreeNode *rightChild = new TreeNode(rightData);
			front->right = rightChild;
			q.push(rightChild);
		}
	}
	return root;
}

class Solution {
	bool isSymmetricHelp(TreeNode* root1, TreeNode* root2) {
		if(root1==NULL  &&  root2==NULL) {  // Both simultaneously NULL
			return true;
		}
		if(root1==NULL  ||  root2==NULL) {  // One of them is NULL.
			return false;
		}
		if(root1->val == root2->val) {
			bool smallAns1 = isSymmetricHelp(root1->left, root2->right); // mirror Recursion calls
			bool smallAns2 = isSymmetricHelp(root1->right, root2->left);
			return (smallAns1 && smallAns2);
		}
		return false;
	}

public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) {
        	return true;
        }
        return isSymmetricHelp(root->left, root->right);
    }
};

int main() {
	TreeNode *root = takeInput();
	Solution solve;
	bool ans = solve.isSymmetric(root);
	cout << (ans == true? "Yes" : "No") << endl;
	return 0;
}