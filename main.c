#include <stdio.h>

//敏感字符管理应用软件---Java C# python js
//C语言一般做硬件控制开发，比如冰箱自动控制程序
//C++ 做算法开发

/*
index
char arr[1024];
arr[0] = 'a'
arr[1] = 'b';

*/

/*
    专车位置管理系统
    1---添加车辆位置
    2---删除车辆位置
    3---显示全部车辆位置
    4---返回离我的位置最近的车辆---业务
    5---退出
 */

/*
    int a;//只能储存一个值
    //技术需求：需要有一种方式，能够让一个变量同时储存两个值
    //在应用编程中，经常需要将多个值，存储在一个变量中

    //结构体机制：通过使用结构体机制，可以自己创建一个变量类型，然后使用你自己创建的变量类型，就可以定义变量
    //结构体机制：本质上是，通过基本数据类型，char int double 来进行组合成一个新的数据类型
    
    
    struct Point
    {
        int x;
        int y;
    };
    
    //struct Point 这个是你通过结构体机制创建的数据类型的名字

    int a;
    a = 1;

    int arr[100];

    arr[0] = 1;
    arr[1] = 2;


    struct Point b;//struct Point是数据类型，等效int   b是通过这个数据类型声明（定义）的变量

    b.x = 1;
    b.y = 2;

    struct Point brr[100];

    brr[0].x = 1;
    brr[0].y = 2;

    brr[1].x = 2;
    brr[1].y = 4;
*/

struct Point
{
    int x;
    int y;
};

int main()
{
    int index = 0;
    struct Point arr[100];
    printf("欢迎进入专场位置管理系统!\n");

    while (1)
    {
        printf("1---添加车辆位置\n");
        printf("2---删除车辆位置\n");
        printf("3---显示全部车辆位置\n");
        printf("4---返回离我的位置最近的车辆\n");
        printf("5---退出\n");

        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入车辆位置的x坐标和y坐标：\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;

            index++;

            printf("添加完成，点击回车继续\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if (code == 2)
        {

        }
        if (code == 3)
        {
            printf("所有车辆位置如下：\n");
            
            for(int i = 0; i < index; i++)
            {
                printf("第%d个车辆的位置为(%d,%d)\n",i+1,arr[i].x,arr[i].y);
            }

            printf("\n点击回车继续\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
            
            
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("应用已经退出\n");
            break;
        }
    }

    return 0;
}