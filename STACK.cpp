#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack <int> s;
	int arr[]={10,20,50,30,40,90,80,70,60,100};
	for(int i=0;i<10;i++){
		s.push(arr[i]);
	}
	while(!s.empty()){
		cout<<s.top()<<", ";
		s.pop();
	}
	
}

