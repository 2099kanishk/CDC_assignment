#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
   int n = nums.size();
        if (n == 0) return;

        k = k % n; // In case k > n

        // Step 1: Copy last k elements into temp
        vector<int> temp(k);
        for (int i = n - k; i < n; i++) {
            temp[i - (n - k)] = nums[i];
        }

        // Step 2: Shift the first n-k elements to the right
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        // Step 3: Place temp at the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
int main(){
        cout << "enter the size of the array"  << endl ;
    int n;
    cin >> n ; 
    vector<int> nums(n) ;
    cout <<"enter the elements of the array" << endl ;
    for(int i = 0 ; i< n  ; i++){
        cin >> nums[i] ;
    }
    int k ; 
    cout << "enter the number of rotations" ;
    cin >> k ;

    rotate(nums , k) ;
    for (int i = 0 ; i < n ; i++){
        cout << nums[i] <<" " ;


    }
    cout << endl ;
    
    return 0 ;


}    

