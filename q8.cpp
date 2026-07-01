/*calculate the sum of all odd numbers from 1 up to n*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"enter a number";
    cin>>number;
    for(int i=1;i<=number;i+=2)
    {
       
            sum +=i;
        

    }
    cout<<sum;
    return 0;
    
}
