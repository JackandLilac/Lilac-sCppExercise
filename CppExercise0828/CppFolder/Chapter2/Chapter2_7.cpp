/** 
 *  Created by Lilac on 2018/9/11.
 *  Email：lilacouyang@tencent.com
 */

#include "Chapter2_7.h"
#include <vector>
#include <iostream>

using namespace std;

bool fibo_elem(int pos, int &elem, const vector<int> *(*fibo_ptr)(int)) {

    if (!fibo_ptr) {
        cerr << "Oops: the function pointer should not be null!\n";
        return false;
    }

    const vector<int> *pesq = fibo_ptr(pos);
    if (!pesq) {
        cerr << "Oops: the array is null!\n";
        elem = 0;
        return false;
    }
    elem = (*pesq)[pos - 1];
    return true;
}

const vector<int> *fibo_sqe(int size) {
    const int max_size = 1024;
    if (size < 1 || size >= max_size) {
        cerr << "The param is not a valid size!\n";
        return 0;
    }
    static vector<int> res_arr;
    for (int i = (int) res_arr.size(); i < size; i++) {
        if (i == 0 || i == 1) {
            res_arr.push_back(1);
        } else {
            res_arr.push_back(res_arr[i - 1] + res_arr[i - 2]);
        }
    }
    return &res_arr;
}

void test_function_pointer() {
    int elem = 0;
    bool res;

    for (int i = 1; i < 10; i++) {
        res = fibo_elem(i, elem, fibo_sqe);
        cout << "Current element: " << i << "\t Current result: " << res << "\t Current element: "
             << elem << "\n";
    }
}