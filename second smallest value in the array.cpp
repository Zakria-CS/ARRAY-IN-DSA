#include<iostream>
using namespace std;
int secondsmallest(int arr[],int n){
	int smallest=arr[0];
	int ssmallest=INT_MAX;
	
	for(int i=0;i<n;i++){
		if(arr[i]<smallest){
			ssmallest=smallest;
			smallest=arr[i];
		}
		else if(arr[i]>smallest && arr[i]<ssmallest){
			ssmallest=arr[i];
		}
	}
	return ssmallest;
}
int main(){
	int n;
	cout<<"Enter The Size of The Array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter The Elements of the Array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int secondsmall=secondsmallest(arr,n);
	cout<<"Second smallest Value in the Array is : "<<secondsmall<<endl;
	return 0;
	return 0;
}