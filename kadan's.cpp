#include <iostream>
#include <vector>

using namespace std;

int KADAN(vector<int> arr){
	int sum=0,max_sum=INT_MIN;
	for(int i=0;i<arr.size();i++){
		sum=max(sum+arr[i],sum);
		max_sum=max(max_sum,sum);
		cout<<sum<<", ";
	}
	return max_sum;
}



int main(){
	vector<int> v;
	v.push_back(2);
	v.push_back(5);
	v.push_back(-9);
	v.push_back(8);
	v.push_back(1);
	v.push_back(-5);
	v.push_back(5);
	v.push_back(2);
	v.push_back(1);
	v.push_back(-8);
	v.push_back(2);
	cout<<KADAN(v);
}
