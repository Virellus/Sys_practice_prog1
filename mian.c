#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 1024

int main(int argc, char* argv[]){
    //attempts to open file
    int fd1 creat(argv[1], 0644);
    //loop through the entries
    for (int i = 2; i < argv; i ++) {
        int val;
        char outBuf[BUF_SIZE];
        //format string to int ans store using refrence
        sscanf(argv[i], "%d", &val);
        //set string using conditional operation
        char* result = (val % == 0) ? "even\n" : "odd\n";
        //set outBuf to the formatted string and outLen to the length
        int outLen = snprintf(outBuf, BUF_SIZE, "%d is %s", val, result);
        write(fd1, outBuf, outLen);
    }
    close(fd1);
    exit(EXIT_SUCCESS);
}

