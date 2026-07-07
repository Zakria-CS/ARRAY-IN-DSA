#include<bits/stdc++.h>
using namespace std;
void Reverse1(int arr[],int start,int end){
	while(start<=end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void Reverse2(int arr[],int start,int end){
	while(start<=end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void Reverse3(int arr[],int start,int end){
	while(start<=end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void manyleftrotation(int arr[],int n,int d){
	Reverse1(arr,0,d-1);
	Reverse2(arr,d,n-1);
	Reverse3(arr,0,n-1);
	
	cout<<"\nNow After Shifting Array is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	
	int n,d;
	cout<<"Enter the size of the Array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the Elements of the Array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the Number of rotation You want : ";
	cin>>d;
	
	cout<<"\nNow Before Shifting Array is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	manyleftrotation(arr,n,d);
	return 0;
}