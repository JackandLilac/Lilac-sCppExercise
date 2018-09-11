/** 
 *  Created by Lilac on 2018/8/30.
 *  Email：lilacouyang@tencent.com
 */

#ifndef CPPEXERCISE0828_LINE_H
#define CPPEXERCISE0828_LINE_H

#endif //CPPEXERCISE0828_LINE_H

class Line
{
public:
    void setLength( double len );
    double getLength( void );
    Line();   // 这是构造函数声明
    ~Line();  // 这是析构函数声明

private:
    double length;
};
