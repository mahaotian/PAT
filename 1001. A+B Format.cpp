#include <iostream>
#include <stack>
using namespace std;

void printAsNum (int n) {
	cout<<n;
}

void printAsFull (int n) {
	if (n>=100) cout<<n;
	else if (n>=10) cout<<"0"<<n;
	else cout<<"00"<<n;
}

void printAsFormat(long long c){
	stack<int> res;
	if (c<1000) {
		cout<<c<<endl;
		return;
	}
	while (c>0) {
		res.push(c%1000);
		c = c/1000;
	}
	printAsNum(res.top());
	res.pop();
	while (res.size()>0){
		cout<<",";
		printAsFull(res.top());
		res.pop();
	}
	cout<<endl;
}

void sum(long long a, long long b){
        long long c = a + b;
        if (c<0) {
        	cout<<"-";
        	printAsFormat(-c);
        } else {
        	printAsFormat(c);
        }
}

int main(){
        long long a,b;
        cin>>a>>b;
        sum(a,b);
        return 0;
}
