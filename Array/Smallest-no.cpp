#include<iostream>
using namespace std;
#include <climits>
int main(){
    int smallest = INT_MAX;
    int nums[] =  {5,10,15,44,2,68,91};
    int size = 7;

    for(int i=0;i<size;i++){
        if(nums[i] < smallest){
            smallest =  nums[i];
    }
    }
        cout<<"Smallest Number is : "<<smallest;
}