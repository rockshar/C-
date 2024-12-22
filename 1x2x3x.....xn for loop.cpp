#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,n,result=1;
    cout<< "Enter the last number of the series: ";
    cin>>n;

    for(i=1; i<=n; i++){
        result= result * i;
    }
    cout<<result;
    getch();
}
