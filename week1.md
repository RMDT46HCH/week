# vscode 和 vs
## 差异点
1. VS Code 更轻量级和灵活，VS 更重量级和完整。
2. 它们的开源和付费情况不同，VSCode 是开源的和免费的，VS 是闭源的和付费的，它们的可访问性和可负担性不同，VS Code 更开放和平等，VS 更封闭和昂贵。
3. 它们的跨平台能力不同，VS Code 是跨平台的，可以在 Windows、macOS 和 Linux 上运行，VS 是平台限定的，主要在 Windows 和 macOS 上运行，它们的适用性和兼容性不同，VS Code 更广泛和灵活，VS 更局限和固定。
4. 它们的安装和更新情况不同，VS Code 是轻量级的，安装和更新很快很简单，VS 是重量级的，安装和更新很慢很复杂，它们的便捷性和时效性不同，VS Code 更快速和及时，VS 更缓慢和滞后。
5. 它们的功能和组件不同，VS Code 是可配置的和可扩展的，它的功能和组件主要依赖于扩展，VS 是完整的和强大的，它的功能和组件主要内置于 IDE，它们的灵活性和稳定性不同，VS Code 更自由和多变。

# mingw
## gcc
### 使用gcc指令编译*.c文件可以生成*exe可执行文件。
### 指令-o（小写）用来指定生成的文件名。

### 预处理(preprocessing)->.i
1. 将所有的"#define"删除，并且展开所有的宏定义。
2. 处理所有条件预编译指令，比如"#if"、“#ifdef”、“#elif”、“#else”、“#endif”。
#define gimbal
#ifdef gimbal
....
#endif
3. 处理"#include"预编译指令，将被包含的文件插入到该预编译指令的位置。注意，这个过程是递归进行的，也就是说被包含的文件可能还包含其他文件。
4. 删除所有的注释"//“和”/* */"。
5. 保留所有的#pragma编译器指令，因为编译器需要使用它们。
6. 经过预处理之后，生成的.i文件不包含任何宏定义，因为所有的宏已经被展开，并且包含的文件也已经被插入到.i文件中。

预处理阶段是用预处理器cpp程序处理的，可以用以下命令处理预处理过程。(-E表示只进行预处理)。

### .i->编译(compilation)->.s
### .s->汇编(assembly)->.o
### .o->链接(linking)->可执行的二进制代码文件




# 变量类型
## 数值类型: 整型、浮点型
## 字符类型: char


##  转换说明符
%d  十进制有符号整数                eg: int a=12;      printf("%d \n",a);

若想存储更大的数值，可用：
%ld  32位无符号整数                 eg: long int a=12;      printf("%ld \n",a);

%lld 64位无符号整数                 eg: long long int a=12;      printf("%lld \n",a);

%u  十进制无符号(即无负数)整数       eg: unsigned int a=12;     printf("%u \n",a);

%lu 32位无符号整数

%llu 64位无符号整数

%f/%2f  单精度浮点数                eg: float a=12.318;  printf("%f \n",a);     输出结果： 12.318000

%lf 双精度浮点数                    eg: double a=12.3;  printf("%lf \n",a);     输出结果： 12.318000

%.2f是float后的小数只输出两位。     eg: float a=12.318;  printf("%.2f \n",a);      输出结果： 12.32

%c 单个字符                         eg: char  a= 'c';(一定要有单引号)  printf("%c \n",a);

%s  字符串                          eg: char a[5]= {'a','b','c','d','e'}; printf("%s\n",a);

%x, %X 无符号以十六进制表示的整数

%o 无符号以八进制表示的整数

# scanf("%d", &i);  //&i 表示变量 i 的地址，&是取地址符

    scanf("%d %d",&a,&b);
    scanf("%d %d %d",&year,&month,&day);
    scanf("%d",&task_flag);

# 运算符
1. 算术运算符
+：加法
-：减法
*：乘法
/：除法
%：取模（求余数）

2. 关系运算符
用于比较两个值之间的关系。

==：等于
!=：不等于
<：小于
>：大于
<=：小于等于
>=：大于等于

3. 逻辑运算符
用于组合多个条件表达式。
&&：逻辑与
||：逻辑或
!：逻辑非

4. 位运算符
用于对整数的二进制位进行操作。

&：按位与
|：按位或
^：按位异或
~：按位取反
<<：左移
>>：右移

a&b  (串联) 0&0==0，0&1==0，1&1==1
a|b  (并联) 0|0==0，0|1==1，1|1==1
a ^ b(异或)  0^0==0，0^1==1，1^1==0

<< 左移进位   1 1 ->10
8 1000  
4 0100  


5. 赋值运算符
用于将值赋给变量。

=：简单赋值
+=：加法赋值   (a+=b； a=a+b；)
-=：减法赋值
*=：乘法赋值
/=：除法赋值
%=：取模赋值
&=：按位与赋值
|=：按位或赋值
^=：按位异或赋值
<<=：左移赋值
>>=：右移赋值
6. 条件运算符
用于条件表达式。
? :：三元条件运算符 
max=(a > b) ? a : b

7. 递增和递减运算符
用于增加或减少变量的值。

a++：递增 a+=1;
--：递减


# 分支和循环
## 条件判断语句
### if
    //多分支
    if(...)
    ...;
    else if(...)
    ...;
    else
    ....;
    if(a>b)
    printf("(1)比大小\n a>b\n");
    else if(a<b)
    printf("(1)比大小\n a<b\n");
    else
    printf("(1)比大小\n a=b\n");

    //单分支
    if(...)
    ...;
    if(num==a*a*a+b*b*b+c*c*c)
    {
        printf("%d ",num);
    }
#### 小插曲
    if(year % 400 == 0 )
    printf("(1)%d 是闰年\n", year);
    if(year % 4 == 0 )
    {
        if(year % 100 != 0)
        printf("(1)%d 是闰年\n", year);
    }


    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
    {
        year_flag = 1;
        printf("(1)%d 是闰年\n", year);
    }
     else 
    {
        year_flag = 0;
        printf("(1)%d 不是闰年\n", year);
    }



### switch
    switch (...) 
    {
        case .... : .....; break;
        case .... : .....; break;
        default: break;
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
## 循环语句
### for
    for (int i = 0; i < 5; i++) 
    {
        printf("i = %d\n", i);
    }
### while
    int i = 0;
    while (i < 5) 
    {
        printf("i = %d\n", i);
        i++;
    }

### do while
    int i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);
# 函数
## 函数的声明（写在.h）
    int add(int a, int b);
    void big(int a, int b);
## 函数的调用
    int main() 
    {
        int result = add(4, 5);  // 函数调用
    }
## 函数的定义
    int add(int a, int b) 
    {
        return a + b;
    }

    void big(int a, int b)
    {
        if(a>b)
        printf("a>b");
    }

# 宏定义（写在.h）
eg：
    #define PI 3.14159
    #define AREA_ROUND(R) ((R)*(R)*PI) 

# 结构体
## 定义（写在.h）
eg：

    typedef struct 
    {
        int motor_type;
        int motor_install;
    }motor_t;
## 声明（写在.c）
    motor_t motor;

## 访问结构体成员
    motor.motor_type=2006;

# 枚举体
## 定义（写在.h）
    typedef enum
    {
        NORMAL=0,
        REVERSE=1,
    }install_e;
## 声明
    install_e motor_install;


























