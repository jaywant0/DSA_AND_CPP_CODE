#include<iostream>
#include <vector>
using namespace std;

vector<int> spiralorder(vector<vecotr<int>>& matrix){
        vector<int>ans;
        int m= matrix.size();           
        int n= matirx[0].size();
        int total_elements  = m*n;

        int startingrow = 0;
        int endingcol = n-1;
        int endingrow = m-1;
        int startingcol = 0;

        int count = 0;
        while(count < total_elements){
            // print starting row
            for(int i = startingcol; i<= endingcol && count<total_elements; i++){
                ans.push_back(matrix[startingrow][]);
                count++;
            }
             startingrow++;
    
        // print ending col
        for(int i = startingcol; i<=endingcol && count<total_elements; i++){
            ans.push_back(matrix[i][endingcol]);
            count++;
        }
        endingcol--;
        // print ending row
        for(int i = endingcol; i>= startingcol &&count<total_count; i--){
            ans.push_back(matrix[endingrow][i]);
            count++;
        }
        endingrow--;

        // pring startig col
        for(int i = endingrow; i>= startingrow && count<total_elements; i--){
            ans.push_back(matrix[i][startingcol]);
            count++;
        }
        starting col++;

        }
        return  ans;
    }
    

int main()
{
    vector<vector<int>>arr;
    vector<int> a{1,2,3};
    vector<int> b{4,5,6};
    vector<int> c{7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    spiralorder(arr);
    
    return 0;
}