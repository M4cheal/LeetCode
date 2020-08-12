#include <stdio.h>
#include <stdlib.h>

int used;
char GetNext(int *a, int *b, int *c)
{
    int m = *a, n = *b, p = *c;
    if (used == 1)
    {
        m = 0;
    }
    if (used == 2)
    {
        n = 0;
    }
    if (used == 3)
    {
        p = 0;
    }
    if ((m >= n) && (m >= p) && (m > 0)) {
        (*a)--;
        used = 0;
        return 'a';
    }
    if ((n >= m) && (n >= p) && (n > 0)) {
        (*b)--;
        used = 0;
        return 'b';
    }
    if ((p >= m) && (p >= n) && (p > 0)) {
        (*c)--;
        used = 0;
        return 'c';
    }
    return '0';
}
char * longestDiverseString(int a, int b, int c){
    used = 0;
    char *res = calloc(a + b + c + 1, sizeof(char));
    char t;
    int cnt = 0;
    while (1) {
        t = GetNext(&a, &b, &c);
        if (t != '0') {
            res[cnt++] = t; 
        } else {
            break;
        }
        if ((cnt >= 2) && (res[cnt - 2] == 'a') && (res[cnt - 1] == 'a')) {
            used = 1;
        }
        if ((cnt >= 2) && (res[cnt - 2] == 'b') && (res[cnt - 1] == 'b')) {
            used = 2;
        }
        if ((cnt >= 2) && (res[cnt - 2] == 'c') && (res[cnt - 1] == 'c')) {
            used = 3;
        }
    }
    return res;
}
void main(){
    printf(longestDiverseString(1, 1, 7));
}