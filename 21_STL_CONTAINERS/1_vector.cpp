#include<iostream>
#include<vector>
using namespace std;




int main()
{
    // 2d array
    vector<vector<int>> arr1(5,vector<int>(4,0));
    // created 2d vector array
    //  with  5 rows 
    // with 4 colums
    // intialize with 0
    // int totalrows = arr1.size();
    // cout<<totalrows<<endl;
    // int totalcolums = arr1[0].size();
    // cout<<totalcolums<<endl;

    vector<vector<int>>brr(4);  
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(5);
    brr[2] = vector<int>(3);
    brr[3] = vector<int>(2);

    int totalrow = brr.size();
    cout<<totalrow<<endl;

      
    // vectr
  
    //vector arr
//     vector<int> arr(10);

//     vector<int> marks;
//     cout<<"maximum size of vector = "<<marks.max_size()<<endl;

//     // insert 50 at begin of vector
//     marks.insert(marks.begin(), 50);
//     cout<<marks.front()<<endl;
    

//     marks.push_back(10);
//     marks.push_back(20);
//     marks.push_back(30);
//     marks.push_back(40);

//     // marks.erase(marks.begin(), marks.end());
//     // cout<<"marks vector size is = "<<marks.size()<<endl;

//     cout<<"capacity of marks vector "<<marks.capacity()<<endl;
//     cout<<"size of marks array = "<<marks.size()<<endl;

    

// //    assign vector or array like this
//     // marks[0] = 100; 
//     cout<<marks[0]<<endl;  // only if vector size is assign
//     cout<<marks.at(0)<<endl;

//     // vector<int> arr1;
//     // arr1[0] = 500;  error
   
//     // begin() -> iterator first index of array of *iterator first valueof  array
//    cout<<*(marks.begin())<<endl;

//    cout<<"size of marks array = "<<marks.size()<<endl;

//     // delete the last element in the vector
//    marks.pop_back();

//    cout<<"size of marks array = "<<marks.size()<<endl;

//    cout<<"front element of marks is = "<<marks.front()<<endl;

//    cout<<"back element of marks vecotr is = "<<marks.back()<<endl;


//    if(marks.empty()){
//     cout<<"marks is empty"<<endl;
//    }
//    else{
//     cout<<"marks are not empty"<<endl;
//    }


//    vector<int> brr;
//    vector<int> crr;

//    brr.push_back(10);
//    brr.push_back(20);
//    brr.push_back(30);
//    brr.push_back(40);
//    brr.push_back(50);

//    crr.push_back(100);
//    crr.push_back(200);
//    crr.push_back(300);
//    crr.push_back(400);
//    crr.push_back(500);


//    // travesing the vector using iterator
//    vector<int>::iterator it = brr.begin();

//    while(it != brr.end()){
//     cout<<*it<<" ";
//     it++;
 
//    }

   // swap funciton simply swap the two vector data
//    brr.swap(crr);
//    cout<<brr[0]<<" "<<brr[1]<<" "<<brr[2]<<" "<<brr[3]<<" "<<brr[4]<<endl;

//    for(int i = 0; i<brr.size(); i++){
//     cout<<brr[i]<<" ";
//    }
//    cout<<endl;

//    for(int i: brr){
//     cout<<i<<" ";
//    }






}