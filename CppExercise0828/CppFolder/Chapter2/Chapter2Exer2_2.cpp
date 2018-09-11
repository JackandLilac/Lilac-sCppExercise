/** 
 *  Created by Lilac on 2018/9/11.
 *  Email：lilacouyang@tencent.com
 *  P82
 */

#include "Chapter2Exer2_2.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool pent_seq(int size, vector<int> *seq) {
    const int max_size = 1024;
    if (size < 1 || size >= max_size) {
        cerr << "Oops, the parameter is not supported!";
        return false;
    }
    for (int i = 1; i <= size; i++) {
        int pn = i * (3 * i - 1) / 2;
        seq->push_back(pn);
    }
    return true;
}

void print_seq(int pos, const char *type) {
    vector<int> sequence;
    if (strcmp(type, "Pentagonal") == 0) {
        bool result = pent_seq(pos, &sequence);
        cout << "\nResult: " << result << "\tSequences: ";
        for (int i = 0; i < sequence.size(); i++) {
            cout << sequence[i] << "\t";
        }
    }
}
