// 把两个fathoms换算成英尺
#include <stdio.h>
int main(void)
{
    int feet, fathoms;//两个变量可以同时定义
    fathoms = 2;
    feet = 6 * fathoms;
    printf("There is %d feet in %d fathoms!\n", feet, fathoms);
    printf("YES! I said %d feet.\n", 6 * fathoms);

return 0;
}