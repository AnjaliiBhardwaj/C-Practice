#include <iostream>
using namespace std;
int main()

{
int n;
cout<<"Enter any number you want to reverse: ";
cin>>n;
int reverse=0;
int rem;

while(n!=0)

{rem = n-(n/10)*10;
reverse=reverse*10+rem;
n=n/10;}

cout<<"The reverse of the number is "<<reverse;


return 0;
}