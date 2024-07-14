#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int a[],int n){
    for(int i=0 ;i<n/2;i++){
        swap(a[i],a[(n-1)-i]);
    }
     for(int i=0 ;i<n;i++){
        cout<<a[i]<<" ,";
    }

}

int main(){
 int s[]={1,2,3,4,5,2,1,2,45,20,21} ;
    reverse(s,sizeof(s)/sizeof(s[0]));

}