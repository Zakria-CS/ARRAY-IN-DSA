#include<bits/stdc++.h>
using namespace std;
void manyleftrotation(int arr[],int n,int d){
	d=d%n;
	/*storing D Number of 
	values in the temporary array.*/
	int temp[d];
	for(int i=0;i<d;i++){
		temp[i]=arr[n-d+i];
	}
	//shifting values backward.
	for(int i=n-d-1;i>=0;i--){
		arr[i+d]=arr[i];
	}
	//putting back value in array from temporary Array.
	for(int i=0;i<d;i++){
		arr[i]=temp[i];
	}
	
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