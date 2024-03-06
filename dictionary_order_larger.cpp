#include<iostream>
using namespace std;
#include<bits/stdc++.h>
// Dictionary order larger 

void Dictionary_order_larger(string &s,string temp,int index,vector<string>&ans){

//permutation :

// base case  :

if(index==s.size()){
if(temp>s){
ans.push_back(s);
}

return;
}
for(int i=index;i<s.size();i++){

    swap(s[i],s[index]);
    Dictionary_order_larger(s,temp,index+1,ans);
    //backtracking
     swap(s[i],s[index]);

}

}

int main() {
  string s;
  cin>>s;

string temp=s;
vector<string>ans;

  Dictionary_order_larger(s,temp,0,ans); 
  sort(ans.begin(),ans.end());  // Here vector sort the string 
  
 // print the vector
for(int i=0;i<ans.size();i++){   // isko neeche kyo print karaya 
    cout<<ans[i];
    cout<<endl;  // yhe to jaruri hai  endl;
}


}