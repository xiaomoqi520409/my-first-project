#include <bits/stdc++.h>
using namespace std;

vector <int> mul(const vector<int> &a,const vector<int>&b){
	int m=a.size(),n=b.size();
	vector <int> c(m+n,0);
	// 核心计算
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			c[i+j]+=a[i]*b[j];
	//进位处理
	int t=0;
	for(int i=0;i<c.size();i++){
		t+=c[i];
		c[i]=t%10;
		t/=10;
	}
	//去除前导零
	 while(c.size()>1&&c.back()==0) c.pop_back();
	 return c;
}


int main(){
	string x,y;cin >>x>>y;
	vector <int> a,b;
	for(int i=x.size()-1;i>=0;i--) a.push_back(x[i]-'0');
	for(int i=y.size()-1;i>=0;i--) b.push_back(y[i]-'0');
	
	vector <int> c=mul(a,b);
	for(int i=c.size()-1;i>=0;i--){
		cout <<c[i];
	}
}










