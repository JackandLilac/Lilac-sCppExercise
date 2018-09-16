#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

/**
 *  Created by Lilac on 2018/9/13.
 *  Email：shuang_ouyang@163.com
 *
 *  《Essential C++》P65 练习2.5
 */

int max(int inta, int intb) {
    return inta > intb ? inta : intb;
}

float max(float fa, float fb) {
    return fa > fb ? fa : fb;
}

char *max(char *stra, char *strb) {
    return stra > strb ? stra : strb;
}

int max(vector<int> intarr) {
    int maxres = intarr[0];
    for (vector<int>::iterator it = intarr.begin(); it != intarr.end(); it++) {
        maxres = *it > maxres ? *it : maxres;
    }
    return maxres;
}

float max(vector<float> farr) {
    float maxres = farr[0];
    for (vector<float>::iterator it = farr.begin(); it != farr.end(); it++) {
        maxres = *it > maxres ? *it : maxres;
    }
    return maxres;
}

char *max(vector<char *> strarr) {
    char *maxres = strarr[0];
    for (vector<char *>::iterator it = strarr.begin(); it != strarr.end(); it++) {
        maxres = *it > maxres ? *it : maxres;
    }
    return maxres;
}

//int main() {
//    int nums[] = {3, 2, 9, 8, 1};
//    vector<int> intarr(nums, nums + 5);
//    vector<float> farr;
//    farr.push_back(3.2);
//    farr.push_back(2.2);
//    farr.push_back(9.2);
//    farr.push_back(8.2);
//    farr.push_back(1.2);
//    char *strs[] = {"abc", "def", "ka", "rg", "q"};
//    vector<char *> strarr(strs, strs + 5);
//
//    cout << "Exercise 2.5 begins......\n";
//    cout << "max(5, 2): " << max(5, 2) << "\n";
//    cout << "max(5.2, 2.5): " << max(5.2, 2.5) << "\n";
//    cout << "max('abc', 'efg'): " << max("abc", "efg") << "\n";
//    cout << "max(intarr): " << max(intarr) << "\n";
//    cout << "max(farr): " << max(farr) << "\n";
//    cout << "max(strarr): " << max(strarr) << "\n";
//}



