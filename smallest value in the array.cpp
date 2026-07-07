#include<iostream>
using namespace std;
int smallest(int arr[],int n){
	int small=arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i]<small){
			small=arr[i];
		}
	}
	return small;
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
	
	int min=smallest(arr,n);
	cout<<"Smallest Value in the Array is : "<<min<<endl;
	return 0;
}