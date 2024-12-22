#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int sum=0,i,num;
    cout<< "Enter the last number: ";
    cin>>num;

    for(i=1; i<=num; i++){
        sum= sum + i*i*i*i*i;
    }
    cout<<sum<<endl;
    getch();
}
