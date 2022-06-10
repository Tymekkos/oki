#include <iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long a;
vector<a>DzielnikiD;
vector<a>DzielnikiC;

int isValid(a m1, a m2, a d1, a d2){
	if( (m1<=d1 && m2<=d2) || (m2<=d1 && m1<=d2) ) return 1;
	return 0;
}

int main()
{
    a A, B, C, D, c, d;
    cin>>A>>B>>C>>D;
	for(int i=1; i<=sqrt(C)+2; i++){
		if( C%i!=0 ){
            continue;
		}
		DzielnikiC.push_back(i);
		DzielnikiC.push_back(C/i);
	}
	for(int i=1; i<=sqrt(D)+2; i++){
		if( D%i!=0 ){
            continue;
		}
		DzielnikiD.push_back(i);
		DzielnikiD.push_back(D/i);
	}
	for(int i=0; i<(int)DzielnikiC.size(); i++){
		c = DzielnikiC[i];
		for(int j=0; j<(int)DzielnikiD.size(); j++){
			d = DzielnikiD[j];
			if( isValid(c*d, C*D/(c*d), A, B) ){
				cout << "tak" << endl;
				return 0;
			}
		}
	}
	cout<<"nie"<<endl;
	return 0;
}
































