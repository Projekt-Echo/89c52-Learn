#include<regx52.h>
#include<extern.h>


// 主函数定义
void main(void) {
    P2 = 0xFF;
    while (1)
    {
        if (isKeyPressed(Key1))
        {
            display(0, 1);
        }else if (isKeyPressed(Key2))
        {
            display(0, 2);
        }else if (isKeyPressed(Key3))
        {
            display(0, 3);
        }else if (isKeyPressed(Key4))
        {
            display(0, 4);
        }else{
            P0 = 0x00;
            P2 = 0xFF;
        }
        
    }
    
}