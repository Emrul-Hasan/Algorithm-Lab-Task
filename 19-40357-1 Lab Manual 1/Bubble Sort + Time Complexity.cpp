#include <iostream>
#include<conio.h>
using namespace std;

void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void bubblesort(int a[], int n)
{
    int i,pass;
    for(pass=1;pass<n;pass++)
    {
        int counter = counter +2;

        for(i=0;i<n;i++)
        {
            counter ++;
            if(a[i]>a[i+1])

            {
                counter = counter +3;
                swap(&a[i],&a[i+1]);
            }
        }
    }
}


int main()
{
    int i,n;
    int counter = 0;
    cout<<"Enter the element numbers:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        counter = counter+2;
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"After sorting :  "<<endl;
    for(i=0;i<n;i++)
    {
        counter = counter+2;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Time Complexity : " <<counter;
    getch();
}



