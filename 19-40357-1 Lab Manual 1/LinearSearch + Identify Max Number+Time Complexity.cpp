#include <iostream>
#include<conio.h>
using namespace std;

void linearsearch(int a[],int n,int item)
{
    int counter = 0;
    int i,c=0,index;
    for(i=0;i<n;i++)

    {   counter = counter+2;
        if(a[i]==item)
        {
            counter++;
            c=1;
            index=i;
            break;
        }
    }
        if(c==1)

        {
            counter++;
            cout<<"Found in index   "<<index<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }

}

int main()
{
    int i,n,item;
    int counter = 0;
    cout<<"Enter the element numbers:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        counter = counter +2;
        cin>>a[i];
    }
    cout<<"Printing the elements   "<<endl;
    for(i=0;i<n;i++)
    {
        counter = counter + 2;
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl<<endl;
    cout<<"Enter searching iteam :  "<<endl;
    cin>>item;
    linearsearch(a,n,item);

    int max = a[0];

    for(int k=0;k<n;k++){
            counter = counter +2;
        if (a[k]>max){
            counter++;
            max = a[k];
        }
    }
    cout<<endl;
    cout<<"Maximum number : "<<max<<endl;
    cout<<"Time complexity "<<counter;
    getch();
}

