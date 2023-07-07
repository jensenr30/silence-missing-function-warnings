/* All dummy functions are written to return errors / failure so if they are ever called they will
not fail silently. */

typedef int __pid_t;

#include <stdio.h>

int _close(int __fd) {
    return -1;
}

int _fstat(int fildes, void *buf) {
    return -1;
}

__pid_t _getpid(void) {
    return -1;
}

__off_t _lseek(int __fd, __off_t __offset, int __whence) {
    return -1;
}

ssize_t _read(int __fd, void *__buf, size_t __nbytes) {
    return -1;
}

ssize_t _write(int __fd, const void *__buf, size_t __n) {
    return -1;
}

int _kill(__pid_t __pid, int __sig) {
    return -1;
}

int _isatty(int __fd) {
    return 0;
}
