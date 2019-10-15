// two function在一个文件中使用两个函数
#include <stdio.h>
void butler(void);/*首先提供了程序原型 */
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes, Bring me some tea and writeable CD-ROMS.\n");
    return 0;
}
void butler(void)/*在最后给出了函数的源代码 */
{
    printf("You rang, sir?\n");
}