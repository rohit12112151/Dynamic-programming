#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    int prio;
};

node* creatnode(int d,int p){
    node *ptr=(node*)malloc(sizeof(node));
    ptr->data=d;
    ptr->prio=p;
    return ptr;
}

node* pq[50];
int top=-1;
int back=-1;


void enqueue( node* n){
    if(top==-1){top++;pq[top]=n;back++;}

    else{
        int k=top+1;
        while(k>back && pq[k-1]->prio>n->prio){
            pq[k]=pq[k-1];
            k--;
        }
        pq[k]=n;
        top++;
    }
}

node *dequeue(){
    if(top==-1){cout<<"pq is empty!";return NULL;}

    else{
        return pq[back++];
    }
}

int isempty(){
    if(back>top)return 1;
    return 0;
}

int main(){
 
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
     
    
     
return 0;
}