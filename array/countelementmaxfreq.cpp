#include <bits/stdc++.h>
using namespace std;
int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101 , 0) ;
        for(int x : nums){
            freq[x]++;
        }
        int maxfreq = *max_element(freq.begin() , freq.end()) ;
        int ans = 0 ;
        for(int x : freq){
            if( x == maxfreq){
                ans+= x ;
            }
        }
    return ans ;
    }
int main(){
    vector<int> nums = {1,2,3,4,5,4,3} ;
    cout << maxFrequencyElements(nums) ;
}