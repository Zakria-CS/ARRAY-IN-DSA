#include<bits/stdc++.h>
using namespace std;
void manyleftrotation(int arr[],int n,int d){
	reverse(arr,arr+d);
	reverse(arr+d,arr+n);
	reverse(arr,arr+n);
	
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