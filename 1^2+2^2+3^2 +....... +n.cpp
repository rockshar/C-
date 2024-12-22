//1^2+2^2+3^3+......+n

#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<< "Enter the last number of the series: ";
    cin>>n;
    for(i=1; i<=n; i++){
        sum= sum+ pow(i,2);
    }
    cout<<sum;
    getch();
}
