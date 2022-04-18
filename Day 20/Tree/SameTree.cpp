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
	TreeNode *root = new TreeNode(rootData);
	queue<TreeNode*> q;
	q.push(root);
	while(!q.empty()) {
		TreeNode* front = q.front();
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
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) {  // Both simultaneously NULL
        	return true;
        }
        if(p==NULL || q==NULL) {  // One of them is NULL.
        	return false;
        }
        if(p->val == q->val) {
        	bool smallAns1 = isSameTree(p->left, q->left);
        	bool smallAns2 = isSameTree(p->right, q->right);
        	return (smallAns1 && smallAns2);
        }
        return false;
    }
};

int main() {
	Solution solve;
	TreeNode* p = takeInput();
	TreeNode* q = takeInput();
	bool ans = solve.isSameTree(p, q);
	cout << (ans == true ? "Yes" : "No") << endl;
	return 0;
}