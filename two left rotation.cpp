#include<bits/stdc++.h>
using namespace std;
void leftrotate(int arr[],int n){
	int temp[0]=arr[0];
	temp[1]=arr[1];
	for(int i=2;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-2]=temp[0];
	arr[n-1]=temp[1];
	cout<<"\nArray after One Left Rotation : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	
	int arr[n];
	cout<<"Enter the elements of the array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array Before One Left Rotation : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	leftrotate(arr,n);
	
	return 0;
}