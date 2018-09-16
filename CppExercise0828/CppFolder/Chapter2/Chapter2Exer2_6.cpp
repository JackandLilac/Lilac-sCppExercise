#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

/**
 *  Created by Lilac on 2018/9/13.
 *  Email：shuang_ouyang@163.com
 *
 *  《Essential C++》P65 练习2.6
 */

template<typename _T>
_T maxnum(_T ta, _T tb) {
    return ta > tb ? ta : tb;
}

template<typename _T>
_T maxnum(vector<_T> tarr) {
    _T maxres = tarr[0];
    typename vector<_T>::iterator it = tarr.begin();
//    auto it = tarr.begin();
    for (; it != tarr.end(); it++) {
        maxres = *it > maxres ? *it : maxres;
    }

//    for (int i = 0; i < tarr.size(); ++i) {
//        maxres = tarr[i] > maxres ? tarr[i] : maxres;
//    }
    return maxres;
}

void test() {
    int nums[] = {3, 2, 9, 8, 1};
    vector<int> intarr(nums, nums + 5);
    vector<float> farr;
    farr.push_back(3.2);
    farr.push_back(2.2);
    farr.push_back(9.2);
    farr.push_back(8.2);
    farr.push_back(1.2);
    string strs[] = {"abc", "def", "ka", "rg", "q"};
    vector<string> strarr(strs, strs + 5);

    cout << "Exercise 2.6 begins(template) ......\n";
    cout << "maxnum(5, 2): " << maxnum(5, 2) << "\n";
    cout << "maxnum(5.2f, 2.5f): " << maxnum(5.2f, 2.5f) << "\n";
    cout << "maxnum('abc', 'efg'): " << maxnum("abc", "efg") << "\n";
    cout << "maxnum(intarr): " << maxnum(intarr) << "\n";
    cout << "maxnum(farr): " << maxnum(farr) << "\n";
    cout << "maxnum(strarr): " << maxnum(strarr) << "\n";
}

//int main() {
//    test();
//}



