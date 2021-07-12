#include "kernel/types.h"
#include "user/user.h"
#include "kernel/fcntl.h"
#include "kernel/syscall.h"

void
fcfs_test(){
    
}
void
wait_stat_test(){
    perf *performance = (perf*)malloc(sizeof(perf));
    int status;
    if(fork() != 0){
         printf("first set exit status: %d\n",set_priority(25));
        for(int j=0;j < 10;j++){
        for(int i=0;i<10000;i++){
            printf("0");
        }
        sleep(1);
        }
        int exitstatus = wait_stat(&status,performance);
        printf("Child %d finished with pid/exit status: %d\n",exitstatus,status);
        printf("ctime = %d\n",performance->ctime);
        printf("ttime = %d\n",performance->ttime);
        printf("stime = %d\n",performance->stime);
        printf("retime = %d\n",performance->retime);
        printf("rutime = %d\n",performance->rutime);
        printf("average_bursttime = %d\n",performance->average_bursttime);
        free(performance);
    }else{
        if(fork() != 0 ){
             printf("first set exit status: %d\n",set_priority(7));
        for(int j=0;j < 1;j++){
        for(int i=0;i<10000;i++){
            printf("1");
        }
        }
        int exitstatus = wait_stat(&status,performance);
        printf("Child %d finished with pid/exit status: %d\n",exitstatus,status);
        printf("ctime = %d\n",performance->ctime);
        printf("ttime = %d\n",performance->ttime);
        printf("stime = %d\n",performance->stime);
        printf("retime = %d\n",performance->retime);
        printf("rutime = %d\n",performance->rutime);
        printf("average_bursttime = %d\n",performance->average_bursttime);
        free(performance);
    }else{
        printf("first set exit status: %d\n",set_priority(1));
        for(int i=0;i<10000;i++){
            printf("2");
        }
        }
    }
    free(performance);
}
void
trace_test(char *argv[]){
    int pid = 3;
    int x = trace((1<<SYS_sbrk|1<<SYS_kill|1<<SYS_fork |1<<SYS_exit|1<<SYS_exec),pid);
    printf("trace on %d with status %d\n",pid,x);
    mkdir("stam");
    sbrk(4096);
    if (fork() != 0){
        int status;
        wait(&status);
        printf("child finished\n");
        kill(2);
    }
    else{
        sbrk(96);
        // exec("ls",argv);
    }
}
void
set_priority_test(){
    printf("first set exit status: %d\n",set_priority(25));
    printf("second set exit status: %d\n",set_priority(4));
}
int
main(int argc,char *argv[])
{
    trace_test(argv);
    // printf("hey");
    // wait_stat_test();
    // set_priority_test();

    exit(0);
}