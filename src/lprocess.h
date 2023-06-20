struct resources {
    int id;
    int avaliable;
    int max;
};

struct process {
    char name[20];
    int pid;
    struct resources* applicate; // 资源申请向量
    struct resources* stillneed; // 需要申请的资源数量
    struct resources* max;
    int status; // 进程状态，如就绪、等待等
};

