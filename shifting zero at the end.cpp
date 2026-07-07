#include<bits/stdc++.h>
using namespace std;
void movingzeroattheend(int arr[],int n){
	vector<int> temp;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			temp.push_back(arr[i]);
		}
	}
	
	for(int i=0;i<temp.size();i++){
		arr[i]=temp[i];
	}
	int nonzero=temp.size();
	
	for(int i=nonzero;i<n;i++){
		arr[i]=0;
	}
	
	cout<<"\nFinal Array after shifting all zero at the end : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter The Size of the Array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter The elements of the Array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	movingzeroattheend(arr,n);
	return 0;
}