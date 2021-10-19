#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
int n;
cin>>n;
string arr[n];
for(int i=0;i<n;i++){
        cin>>arr[i];
}
for(int i=0;i<n;i++){
        int k=arr[i].length();
        string a;
        ostringstream str1;
        str1<<k-2;
 
        string b=str1.str();
        if (k>10){
            a=arr[i][0];
 
            a=a+b;
            a=a+arr[i][k-1];
            cout<<a<<endl;
 
        }
        else{
        cout<<arr[i]<<endl;
}
}
return 0;
}
