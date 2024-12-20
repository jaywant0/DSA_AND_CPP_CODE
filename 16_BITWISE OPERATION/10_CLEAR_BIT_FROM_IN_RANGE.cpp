#include<iostream>
using namespace std;

void clearbitinrange(int n, int i , int j){
    int a = (-1 << (i + 1));
    int b = (1 << j) -1;
    int mask = a | b;
    n = n & mask;
    cout<<"after clearing n bit "<<n<<endl;
}



int main()
{
  clearbitinrange(15,2,0);


}