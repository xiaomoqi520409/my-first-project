#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &a,vector<int> &b){
	if(a.size()!=b.size()) return a.size()>b.size();
	for(int i=a.size()-1;i>=0;i--){
		if(a[i]!=b[i]) return a[i]>b[i];
	}
	return true;
}


vector <int> sub(vector <int>&a,vector <int>&b){
	vector <int> c;int t=0;
	for(int i=0;i<a.size();i++){
		t=a[i]-t;
		if(i<b.size()) t-=b[i];
		c.push_back((t+10)%10);
		t=t<0?1:0;
	}
	while(c.size()>1&&c.back()==0) c.pop_back();
	return c;
}



int main(){
	string x,y;cin >>x>>y;
	vector <int>a,b;
	for(int i=x.size()-1;i>=0;i--) a.push_back(x[i]-'0');
	for(int i=y.size()-1;i>=0;i--) b.push_back(y[i]-'0');
	bool is_negative=false;
	if(!cmp(a,b)){
		is_negative=true;
		swap(a,b);
	}
	auto c=sub(a,b);
	if(is_negative&&!(c.size()==1&&c[0]==0))
		cout <<'-';
	for(int i=c.size()-1;i>=0;i--){
		cout <<c[i];
	}
}