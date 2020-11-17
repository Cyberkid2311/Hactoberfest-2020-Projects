#include<iostream>
using namespace std;

long long int fact(int n)
{
if(n==1||n==0)
return 1;
else
return n*fact(n-1);
}

int main()
{
cout<<"enter the number ";
int n;
cin>>n;
long long int b=fact(n);
cout<<"the factorial of the number is "<<b;
return 0;
}
