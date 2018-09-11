#include <iostream>
#include "exerciseList.h"
#include "Chapter2/Chapter2_5.h"
#include "NetworkLearning/MemberAccessOperator.h"
#include "Chapter2/Chapter2_7.h"
#include "Chapter2/Chapter2Exer2_2.h"

using namespace Chapter2;
using namespace std;

void test_chapter2_5();

int main() {
//    cout << "Hello, World!" << endl;
//
//     exercise_1();
//     exercise_deconstruct();
//    test_chapter2_5();
//    Subscript();
//    test_function_pointer();

    cout << "Chapter2Exer2_2 begin\n";
    print_seq(10, "Pentagonal");

    return 0;
}

void test_chapter2_5() {
    int elem = 0;
    bool res;
    string msg;
    for (int i = 1; i < 10; ++i) {
        res = fibo_elem(i, elem);
        if (res) {
            cout << "The result is true\tThe element is: " << elem << "\n";
        } else {
            cout << "The result is false\tThe element is: " << elem << "\n";
        }
    }
}
