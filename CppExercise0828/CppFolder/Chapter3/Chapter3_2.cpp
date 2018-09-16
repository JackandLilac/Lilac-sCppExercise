/** 
 *  Created by Lilac on 2018/9/13.
 *  Email：shuang_ouyang@163.com
 *
 *  P73 了解 Iterators
 */

#include <vector>
#include <ostream>
#include <iostream>

using namespace std;

template<typename elemType>
void display(const vector<elemType> &vec, ostream &os) {
    typename vector<elemType>::const_iterator begin_it = vec.begin();
    typename vector<elemType>::const_iterator end_it = vec.end();

    for (; begin_it != end_it; begin_it++) {
        os << *begin_it << ' ';
    }
    os << endl;
}

//int main() {
//    int iarr[] = {1, 2, 3, 4, 5};
//    vector<int> ivec(iarr, iarr + 5);
//    display(ivec, cout);
//}

