#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
	
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i-1]){
			
		}
		else{
			return false;
		}
	}
	return true;
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
	
	int sort=sorted(arr,n);
	
	if(sort==1){
		cout<<"Array is sorted"<<endl;
	}
	else{
		cout<<"Array is not sorted"<<endl;
	}
	return 0;
}