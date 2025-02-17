#include <iostream>
#include <vector>
#include <algorithm>
#include <forward_list>

using std::vector;
using std::cout;
using std::endl;



int main(){
    vector<int> vec = {1,2,3,4,5,6,7};

    std::forward_list<int> list = {1,2,3,4,5,6,7};
    for (auto it = vec.cbegin(); it != vec.cend(); it++){
       // *it = 10;
        cout << *(it) << endl;
    }

    
    std::sort(vec.begin(), vec.end());

    for (auto it : vec){
        cout << (it) << endl;
    }

    return 0;
}