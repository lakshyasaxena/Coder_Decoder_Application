#include <iostream>
using namespace std;
void buildTree(int* arr,int* tree,int start,int end,int treeNode){
    if(start==end){
        tree[treeNode]=arr[start];
        return;
        
    }
    int mid=(start+end)/2;
    buildTree(arr,tree,start,mid,2*treeNode);
    buildTree(arr,tree,mid+1,end,2*treeNode+1);
    tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];
    
}
int main(void){
    
    int arr[]={11,23,33,4,5,6,72};//user can give any desired values
    int* tree=new int[12];
    buildTree(arr,tree,0,6,1);
    for(int i=0;i<14;i++){
        cout<<tree[i]<<endl;
    }
    
}
