#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(17);
    v.push_back(19);
    v.push_back(20);
    cout<<binary_search(v.begin(),v.end(),7)<<endl;
    cout<<binary_search(v.begin(),v.end(),5);
}
// /tmp/qWWos6oPN6.o
// 0
// 1

// === Code Execution Successful ===