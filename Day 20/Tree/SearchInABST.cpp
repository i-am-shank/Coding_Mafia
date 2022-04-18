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

// Print level-wise
void printTree(TreeNode* root) {
	if(root == NULL) {
		return ;
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if((root == NULL)  ||  (root->val == val)) {
        	return root;
        }
        else if(root->val > val) {
        	return searchBST(root->left, val);
        }
        else {
        	return searchBST(root->right, val);
        }
    }
};

int main() {
	Solution solve;
	TreeNode* root = takeInput();
	int val;
	cin >> val;
	TreeNode* ans = solve.searchBST(root, val);
	printTree(ans);
	return 0;
}