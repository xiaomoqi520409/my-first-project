#include <bits/stdc++.h>
using namespace std;
vector <int> add(const vector <int> &a,const vector <int> &b){
	vector<int> c;int t=0;
	for(int i=0;i<a.size()||i<b.size()||t;i++){
		if(i<a.size()) t+=a[i];
		if(i<b.size()) t+=b[i];
		c.push_back(t%10);
		t/=10;
	}
	while(c.size()>1&&c.back()==0) c.pop_back();
	return c;
}

int main(){
	string x,y;cin >>x>>y;
	vector <int> a,b,c;
	for(int i=x.size()-1;i>=0;i--) a.push_back(x[i]-'0');
	for(int i=y.size()-1;i>=0;i--) b.push_back(y[i]-'0');
	c=add(a,b);
	//bool leading_zero=true;
	for (int i = c.size() - 1; i >= 0; i--) {
		//if(leading_zero&&c[i]==0) continue;
		//leading_zero=false;
       cout <<c[i];
    }
    //if(leading_zero) cout <<'0';
}