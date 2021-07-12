typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int  uint32;
typedef unsigned long uint64;

typedef uint64 pde_t;

typedef struct perf{
    int ctime;                  // creation time
    int ttime;                  // termination time
    int stime;                  // total time in SLEEPING state
    int retime;                 // total time in RUNNABLE state
    int rutime;                 // total time in RUNNING state
    int average_bursttime;      // estimated burst time
int start_burst_time;           // current burst time of the proc
}perf;

