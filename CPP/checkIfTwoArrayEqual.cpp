/*Check if two arrays are equal or not
Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Example 1:

Input:
N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
Output: 1
Explanation: Both the array can be 
rearranged to {0,1,2,4,5}
Example 2:

Input:
N = 3
A[] = {1,2,5}
B[] = {2,4,15}
Output: 0
Explanation: A[] and B[] have only 
one common value.
Your Task:
Complete check function which takes both the given array and their size as function arguments and returns true if the arrays are equal else returns false.The 0 and 1 printing is done by the driver code.

Constraints:
1<=N<=107
1<=A[],B[]<=1018

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)
*/






//User function template for C++

// arr : 1st given array
// brr : 2nd given array
// n : size of both the arrays

bool check(vector<ll> arr, vector<ll> brr, int n) {
      unordered_map<ll,ll> m;
      for(int i=0;i<n;i++){
          m[arr[i]]++;
      }
       for(int i=0;i<n;i++){
           m[brr[i]]--;
       }
       for(auto it=m.begin();it!=m.end();it++){
           if(it->second!=0){
               return false;
           }
       }
       return true;
    
}
    