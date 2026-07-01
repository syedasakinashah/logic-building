//find and print the product of all digits of a given number 
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int num,product=1;

    cout<<"enter a number ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        product *=i;
    }
    cout<<product;
    return 0;
}