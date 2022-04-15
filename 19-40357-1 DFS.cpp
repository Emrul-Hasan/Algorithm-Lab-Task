#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;

struct adjList
{
    int vertex_id;
    adjList *next;
};

adjList **G;
const int nv = 7;
int d[nv+1]= {0};//discovered time
int f[nv+2]= {0};//finishing time
stack <int> st;
int time_c = 0;

void dfs(int);
void dfs(int, int);
void addAdjacent(int vertex, int adj)
{
    adjList* node = new adjList;
    node->vertex_id = adj;
    node->next = NULL;

    if(G[vertex] == NULL)G[vertex]=node;
    else
    {
        node->next = G[vertex];
        G[vertex] = node;
    }
}
void showLists()
{
    for(int i=0; i< nv; i++)
    {
        adjList* c=G[i];
        cout<<i+1<<": ";
        while(c)
        {
            cout<<c->vertex_id<<" ";
            c= c->next;
        }
        cout<<endl;
    }
}
void showDFS()
{

    cout<<"\n\nDFS\n";
    for(int i=1; i<=nv; i++)
    {
        cout<< i << ": "<<d[i] << ", " << f[i] <<endl;
        d[i]=0;
        //
    }
    time_c = 0;
}

int main()
{
    int no_v=7,adj,n;
    G = new adjList*[no_v]();
    for(int i=0; i< no_v; i++)
    {
        G[i] = NULL;
    }

    int a[no_v]={3,2,3,3,3,1,1};
    int b[16]={
        2,3,4,
        1,3,
        1,2,4,
        1,3,5,
        4,6,7,
        5,
        5
    };
    int k=0;
    for(int i=0; i< no_v; i++)
    {
        n = a[i];
        for(int j=0; j< n; j++)
        {
           adj = b[k++];
            addAdjacent(i,adj);
        }
    }

    showLists();

    dfs(1);
    showDFS();

    dfs(1,no_v);
    dfs(2,no_v);
    dfs(3,no_v);
    dfs(4,no_v);
    dfs(5,no_v);
    dfs(6,no_v);
}

void dfs(int s)
{
    cout<<"dfs("<<s<<")"<<endl;
    int v,w;
    st.push(s);
    d[s]= ++time_c;
    if(!st.empty())
    {
        v = st.top();
        adjList* node=G[v-1];
        while(node)
        {
            w = node->vertex_id;
            if(d[w] == 0)
            {
                st.push(w);
                dfs(w);
            }
            node= node->next;
        }
        f[s]= ++time_c;//update finishing time of v
    }
}
void dfs(int s, int nv){
    stack <int> st;
    int v,w,t=0;
    int visited[nv+1];// to store discover time
    for(int i=0; i<=nv;i++)visited[i]=0;

    int finished[nv+1]={0};
    st.push(s);
    visited[s]= ++t;
    while(!st.empty()){
        v = st.top();
        st.pop();
        //Push all the adjacent of v in stack that are not visited
        adjList* c=G[v-1];
        while(c)
        {
            w = c->vertex_id;
            if(visited[w] == 0){
                st.push(w);
                visited[w]= ++t;
            }
            c= c->next;
        }

    }
    cout<<"\nDFS starting from:"<< s<<endl;
    for(int i=1; i<=nv; i++){
        cout<<"v: "<< i << ", discovering time: "<<visited[i]<<endl;
    }

}

