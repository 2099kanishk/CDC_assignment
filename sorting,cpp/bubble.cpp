#include <bits/stdc++.h>
using namespace std;
vector <int> bubble_sort( vector<int> &nums , int n ){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if( nums[j] > nums[j+1]){
                swap( nums[j] , nums[j+1]) ;
            }
        }
    }
    return nums ;
}