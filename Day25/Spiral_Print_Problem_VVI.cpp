#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> SpiralOrder(vector<vector<int>>& matrix){
        vector<int> ans;
        int row = matrix.size();
        int col =matrix[0].size();//size of any row
        int count =0;
        int total = row*col;

        //index initialization.
        int StartingRow = 0;
        int StartingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while(count<total){
            //printing starting row;
            for(int index = StartingCol; count<total && index<=endingCol;index++){
                ans.push_back(matrix[StartingRow][index]);
                count++;
            } 
            StartingRow++;
            //printing ending Column
            for(int index = StartingRow; count<total && index<=endingRow;index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            //printing the last row
            for(int index = StartingCol; count<total && index<=endingCol;index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingRow--;
            //printing the starting column;
            for(int index = StartingRow; count<total && index<=endingRow;index++){
                ans.push_back(matrix[index][StartingCol]);
                count++;
            }
            StartingCol++;
        }
        return ans;
    }
};
int main(){
    int n,m;
    cout<<"Enter the no of rows and columns: ";
    cin>>n>>m;
    vector<vector<int>> v;
    v.resize(n, vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    Solution s;
    vector<int> result = s.SpiralOrder(v);
    cout<<"The vector after the spiral print is: "<<endl;
    for(int num: result){
        cout<<num<<" ";
    }
    cout<<endl;
}