/*
 * @Author: Accelerator6869 2770726488@qq.com
 * @Date: 2025-02-14 13:13:02
 * @LastEditors: Accelerator6869 2770726488@qq.com
 * @LastEditTime: 2025-02-14 13:16:19
 * @FilePath: \frontend_practice\new_test_2_14.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//一个自动生成爱心的小程序
#include <iostream>
#include <cmath>
using namespace std;

int main()  
{
    for (double y = 1.5; y > -1.5; y -= 0.1)
    {
        for (double x = -1.5; x < 1.5; x += 0.05)
        {
            double a = x * x + y * y - 1;
            if (a * a * a - x * x * y * y * y <= 0.0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}