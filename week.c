#include <stdio.h>
/* (1) print
int main()
{
    printf("*** \n");
    printf("** \n");
    printf("* \n");
    return  0;
}
*/
/*(2)
int main()
{
    int a,b,c,d;
    printf("������������a��b \n");
    scanf("%d %d",&a,&b);
    //T1
    if(a>b)
    printf("(1)�ȴ�С\n a>b\n");
    else if(a<b)
    printf("(1)�ȴ�С\n a<b\n");
    else
    printf("(1)�ȴ�С\n a=b\n");

    //T2
    if(a<0) c=-a;
    else    c=a;
    if(b<0) d=-b;
    else    d=b;

    if(c>d)
    printf("(2)����ֵ�ȴ�С\n |a|>|b|\n");
    else if(c<d)
    printf("(2)����ֵ�ȴ�С\n |a|<|b|\n");
    else
    printf("(2)����ֵ�ȴ�С\n |a|=|b|\n");

    //T3
    if(a*a>b*b)
    printf("(3)ƽ���ȴ�С\n a*a>b*b\n");
    else if(a*a<b*b)
    printf("(3)ƽ���ȴ�С\n a*a<b*b\n");
    else
    printf("(3)ƽ���ȴ�С\n a*a=b*b\n");

    return 0;

}*/
/*(3)
int main()
{
    int num,a,b,c;
    printf("�������У�\n");
    for(num=100;num<=999;num++)   
    {
        a=num/100;   250/100=2
        b=num/10%10; 250/10=25%10=5
        c=num%10;   250%10=0
        if(num==a*a*a+b*b*b+c*c*c)
        {
            printf("%d ",num);
        }
    }
    return 0;
}
*/

/*(4)
int main()
 {
    int number_flag,task_flag,num,j,k,count=0;
    printf("����������Ҫ��ɵ�����\n");
    scanf("%d",&task_flag);
    if(task_flag==1)
    {
        j=100;
        k=200;
    }
    else if(task_flag==2)
    {
        printf("��������Ҫ�жϵ���\n");
        scanf("%d",&num);
        j=k=num;
    }
    else
    printf("error");

    for (num = j; num <= k; num++) 
        {
            number_flag = 1;
            for (int i = 2; i*i  <= num; i++) 
            {
                if (num % i == 0)
                {
                    number_flag = 0;
                    break;
                }
            }
            if (task_flag == 1) 
            {
                if(number_flag==1)
                {
                    printf("%d ", num);
                    count++;
                }
                if(count%5==0&&count!=0)
                {
                    printf("\n");
                    count=0;
                }
            }
            else if(task_flag==2)
            {
                if(number_flag==1)
                printf("%d������",num);
                else
                printf("%d��������",num);
            }
        }  
    return 0;
}
*/
/*(5)
#include <stdio.h>
int main() 
{
    int day, month, year;
    int sum = 0, year_flag;
    printf("�������� �� ��\n");
    scanf("%d %d %d",&year,&month,&day);
    if (month < 1 || month > 12 || day < 1 || day > 31) 
    {
        printf("error\n");
        return 1;
    }
    switch (month) 
    {
        case 1: sum = 0; break;
        case 2: sum = 31; break;
        case 3: sum = 59; break;
        case 4: sum = 90; break;
        case 5: sum = 120; break;
        case 6: sum = 151; break;
        case 7: sum = 181; break;
        case 8: sum = 212; break;
        case 9: sum = 243; break;
        case 10: sum = 273; break;
        case 11: sum = 304; break;
        case 12: sum = 334; break;
    }
    sum += day;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
    {
        year_flag = 1;
        printf("(1)%d ������\n", year);
    }
     else 
    {
        year_flag = 0;
        printf("(1)%d ��������\n", year);
    }
    if (year_flag == 1 && month > 2)
    sum++;
    printf("(2)�����%d��%d��������ĵ�%d��\n",month, day,sum);
    return 0;
}
*/
/*
//��һ ����1��
#include <stdio.h>
int main() 
{
    int i, j, k;
    int count=0;
    int task_flag;
    printf("����������Ҫ��ɵ���Ŀ\n");
    scanf("%d",&task_flag);
    if (task_flag>2) 
    {
        printf("error\n");
        return 1;
    }
    printf("���е���λ��Ϊ��\n");
            for (i = 1; i < 5; i++)
                {
                    for (j = 1; j < 5; j++) 
                    {
                        for (k = 1; k < 5; k++) 
                        {
                            if (task_flag == 1)
                           {
                                printf("%d%d%d ", i, j, k);
                                count++;
                                if (k == 4&&j==4) 
                                printf("\n");
                           }
                            if(i != j && j != k && i != k&&task_flag==2)
                            {
                                printf("%d%d%d ", i, j, k);
                                count++;
                            }
                        }
                    }
                    if (task_flag==2)
                    printf("\n");
                }
            printf("���У�%d�� \n", count);
    return 0;
 }
 */
/*
//��һ ����2��
#include <stdio.h>
int main() 
{
    int i, j, k;
    int count1=0;
    int count2=0;
    int task_flag = 1;//1ʱ������1

    if (task_flag >= 1&&task_flag<=64)
        {    printf("(1)���е���λ��Ϊ��\n");
            for (i = 1; i < 5; i++)
                {
                    for (j = 1; j < 5; j++) 
                    {
                        for (k = 1; k < 5; k++) 
                        {
                        printf("%d%d%d ", i, j, k);
                        count1++;
                        if (k == 4&&j==4) 
                        printf("\n");
                        task_flag++;
                        }
                    }
                }
            printf("���У�%d�� \n", count1); 
        }
     if (task_flag>=65)
        {        printf("(2)���е���λ��Ϊ��\n"); 
            for (i = 1; i < 5; i++)
            {
                for (j = 1; j < 5; j++) 
                {
                    for (k = 1; k < 5; k++) 
                    {
                        if(i != j && j != k && i != k)
                        {
                            printf("%d%d%d ", i, j, k);
                            count2++;
                        }
                    }
                }
                printf("\n");
             }   

            printf("���У�%d�� \n", count2); 
        } 
    return 0;
 }

 */

/*

int main() 
{

    int infantry_s = 0;     // ������ʻ����
    int sentry_s = 0;       // �ڱ���ʻ����
    int infantry_v = 3;     // �����ٶ�
    int sentry_v = 9;       // �ڱ��ٶ�
    int T;                  // ������ʱ��
    int count;
    int t_90;
    printf("���������ʱ��T(s): ");
    scanf("%d", &T);
    infantry_s=infantry_v*T;                      
    count=T/90;
    t_90= T%90;
    if (t_90 <= 10) 
    {
        sentry_s = 270 * count + sentry_v * t_90;
    }
    else if (t_90 > 10 && t_90 <= 40) 
    {
        sentry_s = 270 * count + 90;
    } 
    else if (t_90 > 40 && t_90 <= 50) 
    {
        sentry_s = 270 * count + 90 + sentry_v * (t_90 - 40);
    }
        else if (t_90 > 50 && t_90 <= 80) 
    {
        sentry_s = 270 * count + 180;
    } 
    else if (t_90 > 80 && t_90 <= 90) 
    {
        sentry_s = 270 * count + 180 + sentry_v * (t_90 - 80);
    }

    if (sentry_s > infantry_s)
    printf("sentry %d\n", sentry_s);
    else if (infantry_s > sentry_s) 
    printf("infantry %d\n", infantry_s);
    else
    printf("draw\n");
    return 0;
}*/
#include <stdio.h>

int main() 
{
    int t = 0;                  // ������ʱ�� (��)
    int S_sentry = 0;           // �ڱ���ʻ����
    int S_infantry = 0;         // ������ʻ����
    int time ;         
                         
    printf("���������ʱ��T(s): ");
    scanf("%d", &t);

    if (t <= 1) 
    {
        printf("ERROR\n");
        return 1;
    }

    S_infantry=3*t;
    for( time = 1 ; time <= t ; time ++ )
    {
        if( (time % 10 == 0) && (S_sentry > 3*time ) ) //һ��һ���ɨ����������ʱ���в���
        {
            time += 30;//sentryͣ�µȴ�infantry 30s
        } 
        S_sentry += 9;//���ȴ�ʱ���м�ʱ������ʱ����λʱ���ڵľ���
    }

    if (S_sentry > S_infantry)
    {
        printf("sentry %d\n", S_sentry);
    }
     else if (S_infantry > S_sentry) 
    {
        printf("infantry %d\n", S_infantry);
    }
     else 
     {
        printf("draw\n");
    }

    return 0;
}
