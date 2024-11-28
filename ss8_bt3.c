#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("hay nhap mot so nguyen bat ki ");
    scanf("%d", &num);
    int a[num][num];
    int temp=1;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            a[i][j]=temp;
            temp++;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
