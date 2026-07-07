#include<bits/stdc++.h>
using namespace std;

void removedup(int arr[],int n){
	set<int> st;
	for(int i=0;i<n;i++){
		st.insert(arr[i]);
	}
	int index=0;
	for(auto it : st){
		arr[index]=it;
		index++;
	}
	
	cout<<"Elements in array after removal of duplicate elements : ";
	for(int i=0;i<index;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter the Size of the array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the Elements of the array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	removedup(arr,n);
	return 0;
}