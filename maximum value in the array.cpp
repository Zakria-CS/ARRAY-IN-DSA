#include<iostream>
using namespace std;
int largest(int arr[],int n){
	int large=arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i]>large){
			large=arr[i];
		}
	}
	return large;
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
	
	int max=largest(arr,n);
	cout<<"Largest Value in the Array is : "<<max<<endl;
	return 0;
}