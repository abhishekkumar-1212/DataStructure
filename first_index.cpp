  // first index
  /*
  Output Format
Display the first index at which number M is found

Sample Input
5
3
2
1
2
2
2
Sample Output
1
  
  */

 #include<iostream>
 using namespace std;
int first_index(int arr[],int n,int target,int i){
// base case 
  if (i== n) {
        return -1;
    }
if(target==arr[i]){
//cout<<i;
return i;

}

// recusive case 
return first_index(arr,n,target,i+1);


}


 int main(){
int n;
cin>>n;
int arr[1000];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cin>>target;
cout<<first_index(arr,n,target,0);

 }