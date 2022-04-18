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

// Take input level-wise
TreeNode* takeInput() {  // for null nodes.. use data -1.. as treeNode data are valued above 1.
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
		cin >> leftData;
		if(leftData != -1) {
			TreeNode* leftChild = new TreeNode(leftData);
			q.push(leftChild);
			front->left = leftChild;
		}
		cin >> rightData;
		if(rightData != -1) {
			TreeNode* rightChild = new TreeNode(rightData);
			q.push(rightChild);
			front->right = rightChild;
		}
	}
	return root;
}

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
    	if(root == NULL) {
    		return 0;
    	}
        if(root->val < low) {  // search only right sub-trees
        	return rangeSumBST(root->right, low, high);
        }
        else if(root->val > high) {  // search only left sub-tree
        	return rangeSumBST(root->left, low, high);
        }
        else {  // search both sub-tree
        	int smallAns1 = rangeSumBST(root->left, low, high);
        	int smallAns2 = rangeSumBST(root->right, low, high);
        	return (root->val + smallAns1 + smallAns2);
        }
    }
};

int main() {
	TreeNode* root = takeInput();
	int low, high;
	cin >> low >> high;
	Solution solve;
	int ans = solve.rangeSumBST(root, low, high);
	cout << ans << endl;
	return 0;
}