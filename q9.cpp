//calculate and print the factorial of a given number
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int num;
    long long factorial=1;// here int cant store teh large values values of factorial 
    // thats why we are using long long we could have write long ony but long long v=can hold more values 

    cout<<"enter a number";
    cin>>num;
    for (int i = 1;i<=num;i++)
    {
        factorial *=i;

    }
    cout<<factorial;
    return 0;


}