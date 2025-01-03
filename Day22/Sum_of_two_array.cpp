#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> num){
    int s = 0;
    int e = num.size()-1;
    while(s<=e){
        swap(num[s],num[e]);
        s++;
        e--;
    }
}
void print(vector<int> num){
    int n=num.size();
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}
vector<int>sum(vector<int>&a, int n,vector<int>&b,int m){
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry = 0;
    while(i>=0 &&j>=0){
        int val1 = a[i];
        int val2 = b[i];
        int sum = val1+val2+carry;
        int carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //first case
    while(i>=0){
        int sum = a[i]+carry;
        int carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum = b[j]+carry;
        int carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum=sum/10;
        ans.push_back(sum);
    }
    // // reverse(ans);
    return(ans);
    reverse(ans);
    print(ans);
}

int main(){
    vector<int> v1 = {1,2,3,4};
    int n=4;
    int m=2;
    vector<int>v2={0,4};
    sum(v1,n,v2,m);
}