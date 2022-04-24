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
	TreeNode(int x, TreeNode *left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode *takeInput() {
	int rootData;
	cin >> rootData;
	if(rootData == -1) {
		return NULL;
	}
	TreeNode* root = new TreeNode(rootData);
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

class Solution {
	bool isSameTree(TreeNode* root1, TreeNode* root2) {
		if(root1==NULL  &&  root2==NULL) {
			return true;
		}
		else if(root1==NULL || root2==NULL) {
			return false;
		}
		if(root1->val == root2->val) {
			bool leftAns = isSameTree(root1->left, root2->left);
			bool rightAns = isSameTree(root1->right, root2->right);
			return (leftAns && rightAns);
		}
		return false;
	}

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot==NULL) {  // Simultaneously both NULL.
        	return true;
        }
        else if(root==NULL || subRoot==NULL) {  // One of them is NULL.
        	return false;
        }
        if(root->val == subRoot->val) {
        	bool smallAns = isSameTree(root, subRoot);
        	if(smallAns == true) {
        		return true;
        	}
        }
        bool smallAns1 = isSubtree(root->left, subRoot);
        bool smallAns2 = isSubtree(root->right, subRoot);
        return (smallAns1 || smallAns2);
    }
};

int main() {
	TreeNode* root = takeInput();
	TreeNode* subRoot = takeInput();
	Solution solve;
	bool ans = solve.isSubtree(root, subRoot);
	cout << (ans == true ? "True" : "False") << endl;
	return 0;
}