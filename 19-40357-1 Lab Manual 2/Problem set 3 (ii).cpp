#include <iostream>
using namespace std;

long power(long x, long n)
{
    if(n==0)
        return 1;
    if(n%2==0)
    return power(x,n/2)*power(x,n/2);

    return x*power(x,n/2)*power(x,n/2);
}

int main(){
    long value = power(3,5);
    cout<< value;


    return 0;
    }
