#include<iostream>
using namespace std;

int fibonacci(int);

int main()
{
  int n, m= 0;
  int i;
  int com = 1;
   cout<<"Enter the number of terms: ";

   cin>>n;

      cout<<"Fibonacci Series: ";
  for (i = 1; i <= n; i++)

  {
      com = com++;
    cout<<"  "<<fibonacci(m);
           m++;
           com++;
  }
  cout<<endl;
  cout<<"Time complexity  :"<<com;

  return 0;

   int fibonacci[n+1];
    fibonacci[0]=0;
    fibonacci[1]=1;

}

int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}
