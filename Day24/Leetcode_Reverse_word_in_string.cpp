// //Reverse the string word as well as the charcaters of the string
// // input: My name is praneet
// // Output: teenarp si eman yM
// #include<iostream>
// #include<string>
// using namespace std;
// void reverse(string a){
//     int s = 0;
//     int e = a.length()-1;
//     while(s<e){
//         swap(a[s],a[e]);
//     } 
// }
// int main(){
//     string s;
//     getline(cin,s);
//     reverse(s);
//     cout<<"the string after Reversing words and characters : ";
//     for(int i=0;i<s.length()-1;i++){
//         cout<<s[i];
//     }
// }
#include <iostream>
#include <string>

std::string removeAdjacentDuplicates(const std::string& str) {
    std::string result;

    for (char ch : str) {
        // If the result is not empty and the last character is the same as current
        if (!result.empty() && result.back() == ch) {
            result.pop_back();  // Remove the last character
        } else {
            result += ch;  // Add the current character
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::string output = removeAdjacentDuplicates(input);
    std::cout << "Resulting string: " << output << std::endl;

    return 0;
}
