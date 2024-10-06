// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     v.push_back(9);
//     // auto last=unique(v.begin(),v.end());
//     // 
//     //v.erase(last,v.end());
//     // v.erase(v.begin()+5);
//     // for(int i=0;i<v.size();i++){
//     //     cout<<v[i]<<" ";
//     // }
//     // cout<<v.at(2);
//     // for(int i=0;i<v.size();i+=2){
//     //     v.insert(v.begin()+i,2);
//     }
//     int target=1;
    
//     int count = count(v.begin(),v.end(),target);
//     // for(int i:v){
//     //     cout<<i<<" ";
//     // }
//     cout<<count;
// }
#include <iostream>
#include <vector>
#include <algorithm> // for std::count
using namespace std;
int main() {
    int n;
    cin>>n;
    std::vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    int target = 1;
    int count = std::count(numbers.begin(), numbers.end(), target);

std::cout << "The number " << target << " appears " << count 
<< " times." << endl;

    return 0;
}
}
