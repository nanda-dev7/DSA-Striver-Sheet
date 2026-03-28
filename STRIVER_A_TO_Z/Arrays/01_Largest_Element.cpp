/*       
Problem: Largest Element in an Array            
Platform: Striver A2Z
Topic: Arrays
Difficulty: Easy

Brute Force Approach:
- Sort the array in ascending order.
- After sorting, the last element arr[n-1] will be the largest element.

Time Complexity: O(n log n)
Space Complexity: O(1)

Drawback:
- Sorting takes extra time, so this is not the most efficient solution.

Optimal Approach:
- Initialize a variable maxi with the first element of the array.
- Traverse the array from index 1 to n-1.
- If arr[i] > maxi, update maxi = arr[i].
- After completing the traversal, return maxi.

Why this works:
- We check each element only once and keep track of the maximum element seen so far.

Time Complexity: O(n)
Space Complexity: O(1)

Edge Cases:
1) If the array is empty, return -1.
2) If the array has only one element, return that element.
3) If the array contains negative numbers, initializing maxi = arr[0] is necessary.
4) Duplicate values do not affect the result.

*/

#include<bits/stdc++.h>
using namespace std;

int LargestElement(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr1[]={2,5,6,8,99};
    int n=5;
    int max=LargestElement(arr1,n);
    cout<<"The Largest Element in the array is: "<<max<<endl;
}

