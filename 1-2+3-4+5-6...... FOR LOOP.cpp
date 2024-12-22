#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,even=0,odd=0;
    cout<< "Enter the last number of the series: ";
    cin>>n;

    for(i=1; i<=n; i++){
        if(i%2==0)
            even= even + i;
        else
            odd= odd+ i;
    }
    cout<< "Sum= "<<odd-even<<endl;
    getch();
}
