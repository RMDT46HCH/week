#ifndef week1_4
#define week1_4

void task2(int task_flag);

typedef enum
{
    NORMAL=0,
    REVERSE=1,
}install_e;


typedef struct 
{
    int motor_type;
    install_e motor_install;
}motor_t;



#endif