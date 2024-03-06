#include<iostream>
using namespace std;

int stair(int n){


// base case 
if(n==0) return 1;
if(n<0) return 0;
// ek case 
int ans=stair(n-1)+stair(n-2)+stair(n-3);
return ans;


}


int stairs(int n,int k)
{
    // base case 
    if(n==0) return 1;
    if(n<0) return 0;


int ans=0;
for(int i=1;i<=k;i++){
    ans+=stairs(n-i,k);
}

return ans;

}

// store all the steps in the  vector

void printways(int n,int arr[],int s,int &cnt){

if(n==0){

for(int l=0;l<s;l++){
cout<<arr[l]<<" ";

}
cout<<endl;
return ;


}
if(n<0) return ;
arr[s]=1;
printways(n-1,arr,s+1,cnt);
arr[s]=2;
printways(n-2,arr,s+1,cnt);
arr[s]=3;
printways(n-3,arr,s+1,cnt);

}





int main() {

// Nth stair 

int n;
cout<<"Enter the  stair no."<<endl;
cin>>n;
int arr[1000];
int k;
cout<<"Enter the value of k:"<<endl;
cin>>k;
int cnt=0;

cout<<stair(n);
cout<<endl;
cout<<stairs(n,k);
cout<<endl;
printways(n,arr,0,cnt);




}