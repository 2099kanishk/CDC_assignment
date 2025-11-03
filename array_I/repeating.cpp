#include <bits/stdc++.h>
using namespace std;
void repeat(vector<int> &nums , int n){
    for(int i = 0 ; i < n ; i++){
        if(nums[i] == nums[i+1]){
            cout << nums[i] << " " ;
        }
    }

}
int main (){
    cout << "enter the size of the array"  << endl ;
    int n;
    cin >> n ; 
    vector<int> nums(n) ;
    cout <<"enter the elements of the array" << endl ;
    for(int i = 0 ; i< n  ; i++){
        cin >> nums[i] ;
    }
    repeat(nums , n) ;
    return 0 ;
}