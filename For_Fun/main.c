#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define Max_number 999    /*随机数最大的范围*/

void clever_computer(void);       /*此游戏的最大BUG在于随机的数字会有相同的情况，暂时还想不到方法解决。*/
int output_number = 0;

int main()
{
    printf("请从以下随机的15个数字中，挑选出1个你喜欢的数字，选定后不要改变。\n");
    printf("戳回车键即可开始游戏\n");
    char shuru;             /*变量shuru是用来做暂停的*/
    scanf("%c",&shuru);
    clever_computer();
    printf("这个数就是： %d !!\n",output_number);
    printf("\n谢谢游戏！                    Made By SuperYAN\n");
    return 0;
}

void clever_computer(void)
{
    srand((unsigned int)time(NULL));
    unsigned int total[15];
    unsigned int a[5]={rand()%Max_number+1,rand()%Max_number+1,rand()%Max_number+1,rand()%Max_number+1,rand()%Max_number+1};
    unsigned int b[5]={rand()%Max_number+1,rand()%Max_number+1,rand()%Max_number+1,rand()%Max_number+1,rand()%Max_number+1};
    unsigned int c[5]={rand()%Max_number+1,rand()%Max_number+1,rand()%Max_number+1,rand()%Max_number+1,rand()%Max_number+1};
    int i,j;
    int x = 0;  //循环的次数
    while(1)
    {
    for(i=0; i<5; i++)
    printf("%d    ",a[i]);
    printf("\n");
    for(i=0; i<5; i++)
    printf("%d    ",b[i]);
    printf("\n");
    for(i=0; i<5; i++)
    printf("%d    ",c[i]);
    printf("\n现在你喜欢的数字是在第几行？\n在第   行 \b\b\b\b\b");
    scanf("%d",&j);
    printf("\n");
    if(j==1)
    {
        for(i=0; i<5; i++)
        total[i]=b[i];
        for(i=5; i<10; i++)
        total[i]=a[i-5];
        for(i=10; i<15; i++)
        total[i]=c[i-10];
        x++;
    }
    else if(j==2)
    {
        if(x>1) {output_number = b[2];break;}    //程序结束

        for(i=0; i<5; i++)
        total[i]=a[i];
        for(i=5; i<10; i++)
        total[i]=b[i-5];
        for(i=10; i<15; i++)
        total[i]=c[i-10];
        x++;
    }
    else if(j==3)
    {
        for(i=0; i<5; i++)
        total[i]=a[i];
        for(i=5; i<10; i++)
        total[i]=c[i-5];
        for(i=10; i<15; i++)
        total[i]=b[i-10];
        x++;
    }
    else {printf("输入有误，请重新输入\n\n"); continue; }
    for(i=0;i<5;i++)
    {
        a[i]=total[i*3];
        b[i]=total[i*3+1];
        c[i]=total[i*3+2];
    }
    }
}
