#include<iostream>
using namespace std;

int first_occurance(int arr[],int s, int e, int target){
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        int element = arr[mid];
        if(element == target){
            ans = mid;
            e =mid-1;
        }
        else if (target< element)
        {
            e = mid -1;
            
        }
        else if(target > element){
            s= mid +1;

        }
        mid = s+(e-s)/2;
    } 
    return ans;
}

int last_occurance(int arr[],int s, int e, int target){
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        int element = arr[mid];
        if(element == target){
            ans = mid;
          s = mid+1;
        }
        else if (target< element)
        {
            e = mid -1;
        }
        else if(target > element){
            s= mid +1;
        }
        mid = s+(e-s)/2;
    } 
    return ans;
}

int main()
{
    int arr[] = {1,2,3,4,4,4,4,4,4,4,5,6,7,8,9,10};
    int s = 0;
    int n = (sizeof(arr)/sizeof(int)) -1;
    int e = n;
    int target = 4;
    int a = first_occurance(arr,s,e,target);
    int b =  last_occurance(arr,s,e,target);

   int total_occurence = b-a+1;
   cout<<total_occurence<<endl;


    return 0;
}