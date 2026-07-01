/*calculate and print the sum of the first n natural numbes.*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int sum = 0;//initialize sum
    for(int i = 1;i<=9;i++)
    {
        sum +=i;
       // cout<<sum; dont print inside the loop
    }
     cout<<sum;
    return 0;
}