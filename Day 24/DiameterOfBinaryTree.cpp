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
		cin >> leftData >> rightData;
		if(leftData != -1) {
			TreeNode *leftChild = new TreeNode(leftData);
			q.push(leftChild);
			front->left = leftChild;
		}
		if(rightData != -1) {
			TreeNode* rightChild = new TreeNode(rightData);
			q.push(rightChild);
			front->right = rightChild;
		}
	}
	return root;
}

class Solution {

	int height(TreeNode* root) {
		if(root == NULL) {
			return 0;
		}
		int h1 = height(root->left), h2 = height(root->right);
		return max(h1, h2) + 1;
	}

	pair<int, int> heightDiameter(TreeNode* root) {  // first -> height, second -> diameter
		if(root == NULL) {
			pair<int, int> ans = make_pair(0,0);
			return ans;
		}
		pair<int, int> leftAns = heightDiameter(root->left);
		pair<int, int> rightAns = heightDiameter(root->right);
		pair<int, int> ans;
		int h = max(leftAns.first, rightAns.first) + 1;
		int d = max(leftAns.second, max(rightAns.second, rightAns.first+leftAns.first));
		ans.first = h;
		ans.second = d;
		return ans;
	}

public:
    int diameterOfBinaryTree(TreeNode* root) {
    	/*if(root==NULL) {
    		return 0;
    	}
        int h1 = height(root->left), d1 = diameterOfBinaryTree(root->left);
        int h2 = height(root->right), d2 = diameterOfBinaryTree(root->right);
        int smallAns1 = (h1+h2);
        return max(smallAns1, max(d1, d2));
		*/
		return heightDiameter(root).second;
    }
};

int main() {
	Solution solve;
	TreeNode* root = takeInput();
	int ans = solve.diameterOfBinaryTree(root);
	cout << ans << endl;
	return 0;
}