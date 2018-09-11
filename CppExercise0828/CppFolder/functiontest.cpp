/** 
 *  Created by Lilac on 2018/8/28.
 *  Email：lilacouyang@tencent.com
 */

#include <iostream>
#include "functiontest.h"
using namespace std;

/**
 * Calculate the element in the specific position of Fibonacci.
 * @param pos
 * @return
 */
int fibon_elem(int pos) {

    if(pos < 1){
        return -1;
    }

    int element = 1;
    int n_1 = 1, n_2 = 1;

    for (int i = 3; i <= pos; ++i) {
        element = n_1 + n_2;
        n_1 = n_2;
        n_2 = element;
    }

    return element;
}

bool fibon_elem(int pos, int &elem){

    if(pos <= 0 || pos > 1024){
        elem = 0;
        return false;
    }

    elem = 1;
    int n_1 = 1, n_2 = 1;
    for (int i = 3; i <= pos; ++i) {
        elem = n_1 + n_2;
        n_1 = n_2;
        n_2 = elem;
    }
    return true;
}

bool print_fibon_seq(int pos) {
    if(pos <= 0 || pos > 1024){
        cout << "Oops, could not calculate the element in position #" << pos << endl;
        cout << "Position #" << pos << " is not a valid parameter";
        return false;
    }

    cout << "The  Fibonacci Sequence for " << pos << " are:\n";
    switch (pos){
        default:
        case 2:
            cout << "1 " ;
        case 1:
            cout << "1 ";
            break;
    }
    int elem;
    int n_1 = 1, n_2 = 1;
    for (int i = 3; i <= pos; ++i){
        elem = n_1 + n_2;
        n_1 = n_2;
        n_2 = elem;
        cout << elem << (!(i % 10) ? "\n" : " ");
    }
    cout << endl;
    return true;
}
