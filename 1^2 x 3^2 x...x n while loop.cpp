#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,result=1;
    cout<< "Enter the last number of the series:  ";
    cin>>n;

    i=1;
    while(i<=n){
        result= result * pow(i,2);
        i=i+2;
    }
    cout<<result;
    getch();
}
