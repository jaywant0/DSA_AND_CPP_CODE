#include<iostream>
#include<vector>
using namespace std;

void waveprint(vector<vector<int>>v){
    int row = v.size();
    int col = v[0].size();

    for(int startingcol = 0; startingcol< col; startingcol++){
        // if the index is even then topto bottom
        if((startingcol & 1 )== 0){
            for(int i = 0; i<row; i++){
                cout<<v[i][startingcol]<<" ";
            }
        }
        else{
            // if index is odd bottom to top
            for(int i = row-1; i>= 0; i--){
                cout<<v[i][startingcol]<<" ";
            }
        }
    }
}


int main()
{
    vector<vector<int>>v{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
   
   // vector<int>

    for(int i = 0; i<v.size();i++){
        for(int j = 0; j<v.size(); j++){
            cout<<v[i][j]<<" ";
    }
        cout<<endl;

    }

    // waveprint(v);

    // int row = v.size();
    // int col = v[0].size();
    // int total_element = row*col;
    // int count = 0;

    // int startingrow = 0;
    // int startingcol =  0;
    // int endingrow = row-1;
    // int endingcol = col-1;



    // for(int i = startingrow; i<endingrow; i++){
    //     cout<<v[i][startingcol]
    // }
    return 0;
}