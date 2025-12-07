#include<iostream>
using namespace std;
class shop{
      int id;
      float price;
      public:
      void setdata(int a,int b){
        id = a;
        price = b;
      }
      void getdata(){
         cout<<"The id of the item is : "<<id<<endl;
         cout<<"The price of the item is : "<<price<<endl;
      }
};
int main(){
        shop *ptr = new shop[4]; // 4 object of the class shop
        shop *ptrtemp = ptr;
        int p;
        float q;
        for(int i=0;i<4;i++){
            cout<<"Enter id and price of item : "<<i+1 <<endl;
            cin>>p>>q;
            ptr->setdata(p,q);
           ptr++; // it store address of object
        }
        for(int i=0;i<4;i++){
            cout<<"The item number : "<< i+1<<endl;
            ptrtemp->getdata();
            ptrtemp++;
        }
}