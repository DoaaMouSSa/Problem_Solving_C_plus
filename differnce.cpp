// Given four numbers A, B, C and D. Print the result of the following equation :

//  X = (A * B) - (C * D).

//( - 10pow  ≤  A, B, C, D  ≤  10pow5).
#include <iostream>
using namespace std;

int main()
{
    //long long (because of multiplication)
    long long A, B, C, D, X ;
    cin>>A>>B>>C>>D;
    X=(A*B)-(C*D);
    cout<<"Difference = "<<X<<endl;
    
    return 0;
}