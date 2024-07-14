#include<iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
int subarraysWithSumK(vector< int > a, int b) {
   unordered_map<int, int> prevXor;
    int n=0;
    int sum=0;
    for(int i =0 ; i<a.size() ;i++){
        sum = sum ^ a[i];
        if (sum == b)
            n++;
        if(prevXor.find(sum^b)!=prevXor.end()){
          n+=prevXor[sum^b];
        }
        prevXor[sum]++;
     }
    return n;
}