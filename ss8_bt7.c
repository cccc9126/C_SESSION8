
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int sum = 0;
    for(int i = 0;i<4;i++){
        printf("%d\n",a[i][i]);
        sum+=a[i][i];
    }
    printf("tong cua duong cheo la %d", sum);
    return 0;
}

