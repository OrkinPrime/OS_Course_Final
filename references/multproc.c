#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./program <process_count>\n");
        return 1;
    }

    int processCount = atoi(argv[1]);

    for (int i = 0; i < processCount; i++) {
        pid_t pid = fork();

        if (pid == 0) { // 子进程
            printf("Child process %d\n", getpid());
            // 子进程执行任务              
            // ...
            exit(0);
        } else if (pid > 0) { // 父进程
            // 继续创建新的子进程或其他管理操作
        } else { // fork()调用出错
            printf("Failed to create child process.\n");
            return 1;
        }
    }

    // 等待子进程结束（可选）
    // ...

    return 0;
}