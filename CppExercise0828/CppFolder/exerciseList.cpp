/** 
 *  Created by Lilac on 2018/8/30.
 *  Email：lilacouyang@tencent.com
 */

#include "exerciseList.h"
#include "functiontest.h"
#include <iostream>
#include "Line.h"

using namespace std;

/**
 * 《Essential C++》exercise on page39
 */
void exercise_1() {
    cout << "\n************Begin exercise_1************" << endl;
    int pos;
    cout << "Please enter a position: ";
    cin >> pos;
    int elem;
    if (fibon_elem(pos, elem)) {
        cout << "Element position #" << pos
             << " is: " << elem << endl;
    } else {
        cout << "Sorry, could not calculate element in position #" << pos << endl;
    }
    print_fibon_seq(pos);
    cout << "************End exercise_1************" << endl;
}


/**
 * Other exercises
 */
void exercise_deconstruct() {
    cout << "\n************Begin exercise_deconstruct************" << endl;
    Line line;
    // 设置长度
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;
    cout << "************End exercise_deconstruct************" << endl;
}