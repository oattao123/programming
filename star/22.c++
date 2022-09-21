#include<bits/stdc++.h>
using namespace std;
string a[502];
int main() {
	int n;
	cin >> n;
	for(int i=0; i<(n+1)/2; i++) {
		for(int j=0; j<n-1+n%2; j++) {
			a[i] += "-*"[j==(n+1)/2-1-i || j==(n+1)/2-1+i];
		}
		cout << a[i] << "\n";
	}
	for(int i=(n+1)/2-1-n%2; i>=0; i--)
		cout << a[i] << "\n";
	return 0;
}