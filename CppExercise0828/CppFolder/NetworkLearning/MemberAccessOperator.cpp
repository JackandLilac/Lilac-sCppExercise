/** 
 *  Created by Lilac on 2018/9/11.
 *  Email：lilacouyang@tencent.com
 *  https://zh.cppreference.com/w/cpp/language/operator_member_access
 */

#include <iostream>
#include "MemberAccessOperator.h"

using namespace std;

void Subscript() {
    int arr[4] = {1, 2, 3, 4};
    int *ptr = &arr[2];
    cout << "arr[1]: " << arr[1] << "\n";
    cout << "arr[-1]: " << arr[-1] << "\n";
    cout << "ptr: " << ptr << "\n";
    cout << "*ptr: " << *ptr << "\n";
}