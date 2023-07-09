#include<bits/stdc++.h>
#include<iostream>
#include<array>
#include<thread>
#include <vector>
using namespace std;

void print(std::vector <int> const &a) {
   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';
}

int main(){

    std::vector< int > arr;
    array<int, 4> nums{2, 7, 11, 15};
    int target = 9, diff, i, j;
    for (i=0; i < nums.size()-1; i++){
        diff = target - nums[i];

        for(j=i+1; j<nums.size(); j++)
        {
         if(diff == nums[j]){
            arr.push_back(i);
            arr.push_back(j);
         };
        }
    }

    print(arr);
}
