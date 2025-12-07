#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int sum = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the no at index "<<i<<" is : ";
        cin>>arr[i];
    }
    cout<<"The array is : ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        sum+=arr[i];
}
cout<<endl;
cout<<"The sum of the total no in array is : "<<sum;
}