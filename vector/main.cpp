#include <iostream>
#include <cmath>
#include "myVector.h"

using namespace std;

int main(){
    for(int x = 10; x <= 26; x++){
        int n = pow(2, x);
        clock_t startTime = clock();
        MyVector<int> vec;
        for(int i = 0; i < n; i++){
            vec.push_back(i);
        }
        clock_t endTime = clock();

        cout<<2*n<<" operations: \t";
        cout<<double(endTime-startTime)/CLOCKS_PER_SEC<<" s"<<endl;
    }
    return 0;
}
