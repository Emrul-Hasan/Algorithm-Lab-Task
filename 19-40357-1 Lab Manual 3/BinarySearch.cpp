#include <iostream>
using namespace std;

int main()
{
    int i,n,num,arr[10],low,high,mid;
    cout<<"Enter the number of elements  ";
    cin>>n;
    cout<<"Enter "<<n<<" "<<"Elements ";

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the searching number:"<<endl;
    cin>>num;
    low=0;
    high=n-1;
    mid=(low+high)/2;
    cout<<endl;
     for(int j=low;j<mid;j++)
    {
        cout<<" "<<arr[j];
    }
    int compaire = 1;
    while(low<=high)
    {
        if(arr[mid]<num)
        {

            low=mid+1;
             compaire++;


        }


        else if(arr[mid]==num)
        {

            cout<<num<<" location  "<<mid+1<<endl;
            break;
        }
        else
        {
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    cout<<endl;


    cout<<"Total comparisons "<<compaire;


    cout<<endl;
    if(low>high)
    {
        cout<<num<<"  Not found"<<endl;
    }
    return 0;
}

