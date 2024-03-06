#include<iostream>
using namespace std;
#include<stack>

// balances the parenthesis :
// Self pending:
bool isBalanced(char*a){
stack<char>s;

for(int i=0;a[i]!='\0';i++){

char ch=a[i];
switch(ch){

case '[':
case '{':
case '}':
case '(':

case ')':
if(!s.empty() and s.top()=='('){



}


}



}


}


int main() {




}