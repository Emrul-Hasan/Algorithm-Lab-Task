#include<iostream>
#include<limits>
using namespace std;
int MatrixChainMultiplication(int p[], int n)
{

   int m[n][n];
   int i, j, k, L, q;
      for (i=1; i<=n; i++)
            m[i][i] = 0;

            for (L=2; L<=n; L++)
             {
                for (i=1; i<=n-L+1; i++)
                {
                  j = i+L-1;
                  m[i][j] = INT_MAX;
                  for (k=i; k<=j-1; k++)
                    {

                      q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                      if (q < m[i][j])
                       {
                            m[i][j] = q;

                       }

                    }
                 }
            }

              cout<<endl;

            for(int i=1; i<= n; i++)
              {
                for(int j=1; j<=n; j++)
                 {
                    if(i<j)
                       {
                         cout<<m[i][j]<<"\t";;
                       }

                 }
                 cout<<endl;
             }

            return m[1][n];

}

int main()
{
  int n,i;
  cout<<"Enter number of matrices :";
  cout<<endl;
  cin>>n;
  int arr[n+1];
  cout<<endl;
  cout<<"Enter Dimensions : ";
  cout<<endl;
  for(i=0; i<=n; i++)
   {
      cout<<"Enter Dimensions :"<<"["<<i<<"]"<<" = ";
      cin>>arr[i];
      cout<<endl;
   }
     cout<<"Minimum number of multiplications is :"<<MatrixChainMultiplication(arr, n);
     cout<<endl;
     return 0;
}

