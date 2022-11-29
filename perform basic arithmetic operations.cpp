

#include <iostream>

using namespace std;
int multiply(int x, int y);
int add(int x,int y);
int subtract(int x, int y);
int divide(int x,int y);
int main()
{
    int num1;
    int num2;
    int product;
    //read numbers enterd from user
    cout << "Enter the first numbers" << endl;
    cin>>num1; //stored first number- get input from user
    cout << "Enter the second numbers" << endl;
    cin>>num2; //stored second number- get input from user
        product=multiply(num1, num2);//calling function and stored returning the result by function;
    //print product of numbers
    cout<<"Product of two numbers "<<product<<endl;
    return 0;}




int multiply(int x, int y)
{
    return (x*y);
}
