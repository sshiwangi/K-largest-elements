#include<bits/stdc++.h>
#include<vector>
#include<hash_map>
#define ll long long
using namespace std;
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        map<int,int> mp; // declare a hash map
        for(int i = 0; i<N; i++){  //traverse the first array
            if(mp[A[i]]!=0){ //if the array ele is already present in map
                mp[A[i]]++;  // increase its count
            }
            else{
                mp[A[i]] = 1; // else initialize the count to 1
            }
        }
        for(int i = 0; i<N; i++){ // traverse the 2nd array
            if(mp[B[i]]==0){  // if the ele of 2nd array is not present in  map
                return false; // that means arrays are not equal so return false
            }
            mp[B[i]]--; // else decrease the value of that key in the map by 1 showing that we already traverse this value
        }
        return true;
    }
};

int main(){
    
     return 0;
}