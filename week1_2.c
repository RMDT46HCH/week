#include <stdio.h>
#include "week1_2.h"
#include "week1_3.h"
#include "week1_4.h"

int main()
{
    int big_task_flag,small_task_flag;
    printf("请输入你想完成的任务\n");
    while(1)
    {
        scanf("%d %d", &big_task_flag,&small_task_flag);
        run_task(big_task_flag,small_task_flag);
    }
    return 0;
}
void run_task(int big_task_flag,int small_task_flag)
{
    switch (big_task_flag)
    {
    case 1:
        task1(small_task_flag);
        break;
    case 2:
        task2(small_task_flag);
        break;   
    default:
        printf("error");
        break;
    }
}


