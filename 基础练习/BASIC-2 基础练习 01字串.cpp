BASIC-2 基础练习 01字串  
时间限制：1.0s   内存限制：256.0MB
提交此题   锦囊1   锦囊2
问题描述
对于长度为5位的一个01串，每一位都可能是0或1，一共有32种可能。它们的前几个是：

00000

00001

00010

00011

00100

请按从小到大的顺序输出这32种01串。

输入格式
本试题没有输入。
输出格式
输出32行，按从小到大的顺序每行一个长度为5的01串。
样例输出
00000
00001
00010
00011
<以下部分省略>

#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 1; i++)
        for (int j = 0; j <= 1; j++)
            for (int k = 0; k <= 1; k++)
                for (int l = 0; l <= 1; l++)
                    for (int m = 0; m <= 1; m++) {
                        cout << i << j << k << l << m << endl;
                    }
	return 0;
}

