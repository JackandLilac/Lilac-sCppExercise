/** 
 *  Created by Lilac on 2018/9/14.
 *  Email：shuang_ouyang@163.com
 *
 * C++ 指针数组
 *  http://www.runoob.com/cplusplus/cpp-array-of-pointers.html
 */

#include <iostream>

using namespace std;

const int MAX = 4;

void test_pointer_array(){
    const char *names[MAX] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
            "Sara Ali",
    };

    for(int i = 0; i < MAX; ++i){
        cout << "names[" << i << "]:\t";
        cout << names[i] << "\n";
        cout << "*names[" << i << "]:\t";
        cout << *names[i] << "\n";
    }
}

int main(){
    test_pointer_array();
}