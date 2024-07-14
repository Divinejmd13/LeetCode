#include <iostream>
#include <utility>
#include <bits/stdc++.h>
using namespace std;
pair<int,int> minmax(int arr[],int n){
    sort(arr,arr + n);
    pair<int,int> re;
    re.first=arr[0];
    re.second=arr[n-1];
    return re;
}
int main(){
    int a[]={0,5,6,7,2,1,9,8,2};
    pair<int,int> ans=minmax(a,sizeof(a)/sizeof(a[0]));
    cout<<ans.first<<" "<<ans.second;
}
