#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define Max_number 999    /*��������ķ�Χ*/

void clever_computer(void);       /*����Ϸ�����BUG������������ֻ�����ͬ���������ʱ���벻�����������*/
int output_number = 0;

int main()
{
    printf("������������15�������У���ѡ��1����ϲ�������֣�ѡ����Ҫ�ı䡣\n");
    printf("���س������ɿ�ʼ��Ϸ\n");
    char shuru;             /*����shuru����������ͣ��*/
    scanf("%c",&shuru);
    clever_computer();
    printf("��������ǣ� %d !!\n",output_number);
    printf("\nлл��Ϸ��                    Made By SuperYAN\n");
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
    int x = 0;  //ѭ���Ĵ���
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
    printf("\n������ϲ�����������ڵڼ��У�\n�ڵ�   �� \b\b\b\b\b");
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
        if(x>1) {output_number = b[2];break;}    //�������

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
    else {printf("������������������\n\n"); continue; }
    for(i=0;i<5;i++)
    {
        a[i]=total[i*3];
        b[i]=total[i*3+1];
        c[i]=total[i*3+2];
    }
    }
}
