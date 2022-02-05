#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>> mh;
        for(int i = 0; i<n; i++){
            mh.push(arr[i]);
            if(mh.size()>k){
                mh.pop();
            }
        }
        priority_queue<int> maxh;
        while(mh.size()>0){
            int ele = mh.top();
            maxh.push(ele);
            mh.pop();
        }
        vector<int> ans;
        while(maxh.size()>0){
            ans.push_back(maxh.top());
            maxh.pop();
        }
        return ans;
    }
};

int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for (int i = 0; i <0; i++)
    {
        cin>>arr[i];
    }
    Solution ob;
    vector<int> result = ob.kLargest(arr,n,k);
    for(int i = 0; i<result.size(); ++i){
        cout<<result[i]<<" ";
    }cout<<endl;
    
    
     return 0;
}