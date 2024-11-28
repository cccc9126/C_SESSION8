#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int sum=0, sum2=0;
    for(int i=0;i<3;i++){
        for(int j =0;j<4;j++){
            sum=sum+a[i][j];
        }
    }
    for(int i=1;i<2;i++){
        for(int j=1;j<3;j++){
            sum2+=a[i][j];
        }
    }
    printf("tong bien cua mang la %d\n", sum-sum2);
    return 0;
}
