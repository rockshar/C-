#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, result=1;
    cout<< " Enter the last number : ";
    cin>>n ;

    for(i=1; i<=n; i=i+2){
        result= result * i;
    }
    cout<<result;
    getch();
}
