#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int suma=0, sumb=0, maxa=0, maxb=0;
		for(int i=0; i<n; i++) {
			int elea;
			cin >> elea;
			suma += elea;
			maxa = max(elea, maxa);
		}
		suma -= maxa;
		for(int i=0; i<n; i++) {
			int eleb;
			cin >> eleb;
			sumb += eleb;
			maxb = max(eleb, maxb);
		}
		sumb -= maxb;
		if(suma < sumb) {
			cout << "Alice" << endl;
		}
		else if(suma > sumb) {
			cout << "Bob" << endl;
		}
		else {
			cout << "Draw" << endl;
		}
	}
	return 0;
}