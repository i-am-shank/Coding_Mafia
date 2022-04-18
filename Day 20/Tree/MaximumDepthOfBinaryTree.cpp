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

TreeNode* takeInput() {
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
			front->left = leftChild;
			q.push(leftChild);
		}
		cin >> rightData;
		if(rightData != -1) {
			TreeNode* rightChild = new TreeNode(rightData);
			front->right = rightChild;
			q.push(rightChild);
		}
	}
	return root;
}

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) {
        	return 0;
        }
        int smallAns1 = maxDepth(root->left);
        int smallAns2 = maxDepth(root->right);
        return (1 + max(smallAns1, smallAns2));
    }
};

int main() {
	Solution solve;
	TreeNode *root = takeInput();
	int ans = solve.maxDepth(root);
	cout << ans << endl;
	return 0;
}