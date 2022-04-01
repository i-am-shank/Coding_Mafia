// Problem 104.

#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isFriend(int f, int *friends, int n) {
	bool flag = false;
	for(int i=0; i<n; i++) {
		if(friends[i] == f) {
			flag = true;
			break;
		}
	}
	return flag;
}

int main() {
	int n, m;
	cin >> n >> m;
	int *friends = new int[n];
	for(int i=0; i<n; i++) {
		cin >> friends[i];
	}
	vector<pair<int, string>> friendPost;
	vector<pair<int, string>> post;
	for(int i=0; i<m; i++) {
		int f, p;
		string s;
		cin >> f >> p >> s;
		pair<int, string> pr;
		pr.first = p;
		pr.second = s;
		if(isFriend(f, friends, n)) {
			friendPost.push_back(pr);
		}
		else {
			post.push_back(pr);
		}
	}
	int n1 = friendPost.size(), n2 = post.size();
	sort(friendPost.begin(), friendPost.end(), greater<pair<int,string>>());
	sort(post.begin(), post.end(), greater<pair<int,string>>());
	vector<pair<int,string>> :: iterator it;
	for(it=friendPost.begin(); it!=friendPost.end(); it++) {
		cout << it->second << endl;
	}
	for(it=post.begin(); it!=post.end(); it++) {
		cout << it->second << endl;
	}
	return 0;
}