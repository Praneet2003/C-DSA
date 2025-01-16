#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()){
            return 0; // Handle empty input
        }
        int uniqueIndex = 0; // Points to the position of the last unique element
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[uniqueIndex]) { // If a new unique element is found
                uniqueIndex++;
                nums[uniqueIndex] = nums[i]; // Move it to the next unique position
            }
        }
        return uniqueIndex + 1; // Length of the array with unique elements
    }
}s;
int main(){
    vector<int> v(5);
    cout<<"Enter the elements of vector: ";
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int ans = s.removeDuplicates(v);
    cout<<"Number of duplicates found: "<<ans;
}