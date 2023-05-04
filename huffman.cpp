#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
    char ch;

    node(int d,char c){
        data=d;
        left=NULL;
        right=NULL;
        ch=c;
    }

    
    
};

struct compare
{
    bool operator () (node* n1,node* n2)
    {
        return n1->data < n2->data;
    }
};

 

void huffman(string str, int freq[], int n)
{

    // int arr[2 * n - 1];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = freq[i];
    // }
    // // for(int i=0;i<n;i++)cout<<arr[i]<<" ";

    // int j = n - 1, sum = 0, a = 0;
    // for (int i = 0; i < 2 * n - 1;)
    // {
    //     j = n + a - 1;
    //     sum = arr[i] + arr[i + 1];
    //     if (sum < arr[j])
    //     {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = sum;
    //     i = i + 2;
    //     a++;
    // }

    // for (int i = 0; i < 2 * n - 1; i++)
        // cout << arr[i] << " ";



     /*int arr[2*n-1];
     int i=0;
     priority_queue<int>pq;
     for(int i=0;i<n;i++)pq.push(-freq[i]);
     while(!pq.empty())
     {
        int a=-pq.top();pq.pop();
        if(pq.empty())arr[i]=a;
        else {
            int b=-pq.top();pq.pop();
        arr[i]=a;i++;
        arr[i]=b;i++;
        pq.push(-(a+b));
        }

     }
    //  for (int i = 0; i < 2 * n - 1; i++)
    //     cout << arr[i] << " ";

    int l=0,r=2*n-2;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;r--;
    }

     for (int i = 0; i < 2 * n - 1; i++)
        cout << arr[i] << " ";
        */


       priority_queue < node* , compare > pq;
       for(int i=0;i<n;i++)
       {
        pq.push(new node(freq[i],'p'));
       }

       while(!pq.empty())
       {
        cout<<pq.top().data<<" ";
        pq.pop();
       }



}

int main()
{

    int n;
    cin >> n;
    string str;
    cin >> str;
    int freq[n];
    for (int i = 0; i < n; i++)
        cin >> freq[i];
    huffman(str, freq, n);

    return 0;
}