/** 
 *  Created by Lilac on 2018/8/30.
 *  Email：lilacouyang@tencent.com
 */

#include <iostream>
#include "Line.h"

using namespace std;

// 成员函数定义，包括构造函数
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}