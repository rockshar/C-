#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int i, n, result=1;
  cout<< "Enter the last number of the series: ";
  cin>>n;

  i=2;
  while(i<=n){
    result= result * i;
    i= i+2;
  }
    cout<< result;
    getch();
}
