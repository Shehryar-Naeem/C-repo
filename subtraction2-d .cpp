#include<iostream>
using namespace std;
int main(){
int rowcount,columncount,i,j;
int Firstmatrix[10][10],Secondmatrix[10][10],resultmatrix[10][10];
cout<<"Numbert of rows to be subtracted";
cin>>rowcount;
cout<<"Number of columns to be subtracted";
cin>>columncount;
cout<<"Elements of first matrix\n";
for(i=0;i<rowcount;i++)
for(j=0;j<columncount;j++)
cin>>Firstmatrix[i][j];
cout<<"Elements of second matrix\n";
for(i=0;i<rowcount;i++)
for(j=0;j<columncount;j++)
cin>>Secondmatrix[i][j];
cout<<"Difference of entered matrix\n";
for(i=0;i<rowcount;i++){
for(j=0;j<columncount;j++){
resultmatrix[i][j]=Firstmatrix[i][j]-Secondmatrix[i][j];
cout<<resultmatrix[i][j]<<"\t";


}
cout<<"\n";
}
}









