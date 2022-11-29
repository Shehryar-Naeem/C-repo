#include<iostream>
using namespace std;
int sumandproduct(int a,int b,int* sum,int* product){



*sum=a+b;
*product=a*b;



}
int main(int argc,char*argv){
int x=5,y=12,sum,product;
int status=sumandproduct(x,y,&sum,&product);{
if(status==0){
cout<<"Something wrong/n";
}else{


cout<<"The sum and product is \n"<<sum<<product;
}



}
}
