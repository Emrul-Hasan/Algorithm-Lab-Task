#include <iostream>
using namespace std;

   int getMax(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
        return y;
}

void knapsack(int n,int w[],int b[], int W)
{

    int B[n+1][W+1];
    int i,wt;
    int t=0,g=0,h=0;


        for(wt=0; wt<=W; wt++)
    {
        B[0][wt]=0;

    }

        for(i=0; i<=n; i++)
    {
        B[i][0]=0;

    }


    for(i=1; i<=n; i++)
    {

        for(wt=1; wt<=W; wt++)


        {

            if(w[i]<=wt)
            {

                B[i][wt] = getMax(B[i-1][wt], b[i] + B[i-1][wt -w[i]]);
                                 g++;
            {

            }
            }
            else
            {
                B[i][wt]= B[i-1][wt];
                h++;


                  }


                t++;
        }

           }

            for(int i=0; i<= n; i++)
     {
        for(int j=0; j<=W; j++)
            {

            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
    }


        cout<<endl;
        cout <<"value update="<<g<<endl;
        cout<<"same values are="<<h<<endl;
        cout<<" Number of compares="<<t<<endl;
        cout<<"Maximum profit: "<<B[n][W]<<endl;

             int r = B[n][W];
    for(int item = n; item >0; item--){
        bool found =false;
        cout<<endl;
        cout<<"checking item "<<item<< endl;
        cout<< " r = "<<r << endl;
        cout<<"searching "<<r<< " in row "<< item-1<< endl;

        for(int j=1; j<= W; j++){

            if(B[item-1][j] == r){
                found =true;
            }
        }

        if(found == false){
            cout<< item << " included with profit "<< b[item] << endl;
            r = r - b[item];
        }

    }





}
int main()
{
    int n,i,W;
    int com =0;
    cout<<"Enter number of items: ";
    cin>>n;
    int w[n+1], b[n+1];
    for(i=1; i<=n; i++)
    {
        cout<<"Enter weight for item "<<i<<": ";
        cin>>w[i];
        cout<<"Enter value for item "<<i<<": ";
        cin>>b[i];
    }
    cout<<"Enter Knapsack Capacity: ";
    cin>>W;
    knapsack(n,w,b,W);

}
