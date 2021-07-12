#define NPROC        64  // maximum number of processes
#define NCPU          4  // maximum number of CPUs
#define NOFILE       16  // open files per process
#define NFILE       100  // open files per system
#define NINODE       50  // maximum number of active i-nodes
#define NDEV         10  // maximum major device number
#define ROOTDEV       1  // device number of file system root disk
#define MAXARG       32  // max exec arguments
#define MAXOPBLOCKS  10  // max # of blocks any FS op writes
#define LOGSIZE      (MAXOPBLOCKS*3)  // max data blocks in on-disk log
#define NBUF         (MAXOPBLOCKS*3)  // size of disk block cache
#define FSSIZE       1000  // size of file system in blocks
#define MAXPATH      128   // maximum file path name

#define QUANTUM      5      // clock tick rate
#define DEFAULT      0      //default scheduler
#define FCFS         1      //FCFS scheduler
#define SRT          2      //SRT scheduler
#define CFSD         3      //CFSD scheduler
#define ALPHA        50     // const for the SRT

#define TEST_HIGH    1
#define HIGH         3
#define NORMAL       5
#define LOW          7
#define TEST_LOW     25