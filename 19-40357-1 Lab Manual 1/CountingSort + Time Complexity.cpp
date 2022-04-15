#include <iostream>
#include<conio.h>
using namespace std;

void countingSort(int arr[],int n,int RANGE){
    int count[RANGE]={0};
    int i;
    int out[n];
    int counter = 0;

    counter = counter +1;
    for(i=0;i<n;i++)
    ++count[arr[i]];
    counter = counter +2;

    for(i=1;i<RANGE;i++)
    count[i]+=count[i-1];


    counter = counter + 2;
    for(i=n-1;i>=0;i--){
        out[count[arr[i]]-1]=arr[i];
        --count[arr[i]];
    }


    counter = counter + 2;
    for(i=0;i<n;i++)
    arr[i]=out[i];



}
void print(int arr[],int n){
   int  counter = counter +2;
    for(int i=n-1;i>=0;i--)

    cout<<arr[i]<<' ';
    cout<<endl;
}

int main() {

	int arr[]={9,3,8,7,4,10,9};
	int n=7;
	int RANGE=11;



	print(arr,n);

	countingSort(arr,n,RANGE);
	cout<<"Counting sort after descending order "<<endl;

    print(arr,n);
    int counter = counter +counter;
    cout<<" Time Complexity  :"<<counter;

    getch();
	return 0;

}
