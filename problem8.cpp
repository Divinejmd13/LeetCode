#include<iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std ;
int uniqueSubstrings(string input) {
    unordered_map<char, int> aski;
    int ma=0;
    int count=0;
    for(int i = 0; i < input.size(); i++){
        if(aski.find(input[i]) != aski.end()){
            ma=std::max(count,ma);
            aski.clear();
            count=0;
        } else {
            count++;
            aski[input[i]] = 1;
        }
    }
    return aski.size();
}