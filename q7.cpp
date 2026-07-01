/* Calculate teh sum of all even numbers from 1 upto n.*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int number,even,sum=0;
    cout<<"enter a number";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        if ( i%2==0)
        {
            sum +=i;
        }

    }
    cout<<sum;
    return 0;
    
}
