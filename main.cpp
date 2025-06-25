/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    vector<int> v = {2,3,4,5,6};
    vector<int> vec(5);
    vec[0] = v.back() ;
    
    for(int i=0; i<(vec.size()); i++){
        vec[i+1] = v[i];
    }
    
    for(int i =0; i<(vec.size()); i++){
        cout << vec[i];
    }
    
    return 0;
}