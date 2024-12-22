#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<< "Enter any number: ";
    cin>>n;

    for(i=1 ; i<=n; i++){
        sum=sum+i;

    }
    cout<< "Sum of numbers 1 to "<<n<<"is "<<sum;
    getch();
}
