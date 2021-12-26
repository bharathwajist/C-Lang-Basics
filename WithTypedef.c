#include <stdio.h>

struct point{
    int x;
    int y;
};

typedef struct point point;
int main(){
    point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n",p1.x);
    printf("%d \n",p1.y);
    return 0;
}