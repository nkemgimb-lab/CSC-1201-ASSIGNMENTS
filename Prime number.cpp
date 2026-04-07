#include<iostream>
using namespace std;
bool isPrime(int num){
If(num <= 1) return false;
for(int i = 2; i*i <= num; i++)
{
if(num % i ==0)
return false;
} 
return true;
}
void displayPrime(int n) {
int i;
for (i = 1; i<=n; i++) {
if (isPrime (i)) {
cout << i << " ";
}
}
}
int main (){
int n;
cout <<"enter n:";
cin >> n;
displayPrime(n);
return 0
} 
