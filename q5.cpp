/*Print the multiplication table of a given number from n * 1 to n * 10*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"enter number : ";
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<< endl;
    }
    return 0;
}