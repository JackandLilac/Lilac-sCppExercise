/** 
 *  Created by Lilac on 2018/9/10.
 *  Email：lilacouyang@tencent.com
 */

#include "Chapter2_5.h"
#include <iostream>
#include <vector>

using namespace std;
namespace Chapter2 {
/**
 * 判断待计算的fibonacci数是否超出计算范围
 * @param size
 * @return
 */
    inline bool is_size_ok(int size) {
        const int max_size = 1024;
        if (size <= 0 || size > max_size) {
            cerr << "Oops:requested size is not supported " << size
                 << " --cannot fulfill request!\n";
            return false;
        } else {
            return true;
        }
    }

/**
 * 计算 Fibonacci 数列中的size个元素
 * 并返回含有这些元素的静态容器地址
 * @param size
 * @return
 */
    inline const vector<int> *fibon_seq(int size) {
        static vector<int> fibon;

        if (!is_size_ok(size)) {
            return 0;
        }

        for (int i = fibon.size(); i < size; ++i) {
            if (i == 0 || i == 1) {
                fibon.push_back(1);
            } else {
                fibon.push_back(fibon[i - 1] + fibon[i - 2]);
            }
        }

        return &fibon;
    }

/**
 * 计算fibonacci第pos位置的元素，并保存在elem中
 * @param pos
 * @param elem
 * @return 是否可以计算
 */
    bool fibo_elem(int pos, int &elem) {
        const vector<int> *pesq = fibon_seq(pos);

        if (!pesq) {
            elem = 0;
            return false;
        }

        elem = (*pesq)[pos - 1];
        return true;
    }
}