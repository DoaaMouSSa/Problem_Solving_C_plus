/*Given two numbers N and M. Print the summation of their last digits.
Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).
Output
Print the answer of the problem*/
#include <iostream>
using namespace std;

int getLastDigit(long long number); 
int main() {
    long long num1,num2;
    cin>>num1>>num2;
    int firstLastDig,secondLastDig,sum;
    firstLastDig=getLastDigit(num1);
    secondLastDig=getLastDigit(num2);
    sum=firstLastDig+secondLastDig;
    cout<<sum<<endl;
    return 0;
}
int getLastDigit(long long number){
    int lastDigit = number % 10;
    return lastDigit;
}