#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    char data;
    int freq;
    node*left;
    node*right;

     node(char ch,int fr){
        data=ch;
        freq=fr;
        left=NULL;
        right=NULL;
    }
};

class compare{
    public:
    bool operator ()(node*l,node*r){
        return l->freq > r->freq;
    }
};

void print(node*top,string str){
    if(!top){
        return;
    }
    if(top->data!='$'){
        cout<<top->data<<":"<<str<<endl;

    }
    print(top->left,str+"0");
    print(top->right,str+"1");

}

void huffmancode(char data[],int f[],int n)
{
    node*left,*right,*top;
    priority_queue<node*,vector<node*>,compare>pq;

    for(int i=0;i<n;i++)
    {
        pq.push(new node(data[i],f[i]));
    }

    while(pq.size()!=1){
        node*left=pq.top();pq.pop();
        node*right=pq.top();pq.pop();
        node*top=new node('$',left->freq+right->freq);
        top->left=left;
        top->right=right;
        pq.push(top);
    }

    string str="";
    print(pq.top(),str);
    
}
int main(){
 
    int n;
    cin>>n;
    char data[n];
    for(int i=0;i<n;i++)cin>>data[i];
    int freq[n];
    for(int i=0;i<n;i++)cin>>freq[i];
    huffmancode(data,freq,n);
    
    //compare cmp;
    // priority_queue<node*,vector<node*>,compare>pq;
    // pq.push(new node('o',8));
    // pq.push(new node('o',3));
    // pq.push(new node('o',9));
    // pq.push(new node('o',1));
    // pq.push(new node('o',10));
    // cout<<pq.top()->freq<<" ";pq.pop();
    // cout<<pq.top()->freq<<" ";pq.pop();
    // cout<<pq.top()->freq<<" ";pq.pop();
    // cout<<pq.top()->freq<<" ";pq.pop();
    // cout<<pq.top()->freq;pq.pop();
return 0;
}