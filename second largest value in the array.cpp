#include<iostream>
using namespace std;
int secondlargest(int arr[],int n){
	int largest=arr[0];
	int slargest=-1;
	
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			slargest=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && arr[i]>slargest){
			slargest=arr[i];
		}
	}
	return slargest;
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
	
	int secondmax=secondlargest(arr,n);
	cout<<"Second Largest Value in the Array is : "<<secondmax<<endl;
	return 0;
	return 0;
}