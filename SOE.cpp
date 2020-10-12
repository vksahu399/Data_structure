#include <iostream>
#include <vector>
using namespace std;

void SOE(int num){
	vector<bool> p(num,true);
	p[0]=false;
	p[1]=false;
	for(int i=2;i*i<=num;i++){
		if(p[i]==true){
			for(int j=i*2;j<=num;j=i+j){
				p[j]=false;
			}
		}
	}
	for(int i=0;i<=p.size();i++){
		cout<<i<<" : "<<p[i]<<endl;
	}
}


int main(){
	int n=100;
	SOE(n);
	return 0;
}
