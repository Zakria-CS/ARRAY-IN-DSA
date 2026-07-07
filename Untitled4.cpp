#include<bits/stdc++.h>
using namespace std;
vector<int> leftrotate(vector<int>&arr,int n){
	int temp=arr[0];
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
	
	return arr;
}
int main(){
	
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	
	vector<int> arr[n];
	cout<<"Enter the elements of the array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array Before One Left Rotation : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	arr[n]=leftrotate(arr,n);
	cout<<"\nArray after One Left Rotation : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}