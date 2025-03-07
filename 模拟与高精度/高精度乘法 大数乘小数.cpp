#include <bits/stdc++.h>
using namespace std;

vector <int> mul(const vector<int> &a,int &b){
	vector <int> c;
	int t=0;
	for(int i=0;i<a.size()||t;i++){
		if(i<a.size()) t+=a[i]*b;
		c.push_back(t%10);
		t/=10;
	}
	while(c.size()>1&&c.back()==0) c.pop_back();  //去除前导零
	return c;
}



int main(){
	string x,y;int b;cin >>x>>b;
	vector <int> a,c;
	for(int i=x.size()-1;i>=0;i--) a.push_back(x[i]-'0');
	c=mul(a,b);
	//bool leading_zero=true;
	for (int i = c.size() - 1; i >= 0; i--) {
		//if(leading_zero&&c[i]==0) continue;
		//leading_zero=false;
       cout <<c[i];
    }
    //if(leading_zero) cout <<'0';
}