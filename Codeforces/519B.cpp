#include<bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;


int main(){
	int n;
	
	cin >> n ;
	
	int  x, ca = 0, cb = 0, cc = 0;
	
	forn(i, n){
		cin >> x;
		
		ca = ca + x; // es igual que c += x;
	}
	
	forn(i, n-1){
		cin >> x;
		
		cb = cb + x;
	}
	
	forn(i, n-2){
		cin >> x;
		
		cc = cc + x;
	}
	

	
	cout<< ca-cb << endl << cb-cc << endl;
	

	
	
	return 0;
}
