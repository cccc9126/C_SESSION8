
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("hay nhap mot so de kiem tra ");
    scanf("%d", &num);
    int a[2][3]={{1,2,3},{3,5,6}};
    int index=0;
    for(int i = 0;i<2;i++){
        for(int j=0;j<3;j++){
            if(num==a[i][j]){
                printf("phan tu o vi tri a[%d][%d]\n",i,j);
                index++;
            }
        }
    }
    if(index==0){
        printf("khong co phan tu %d trong mang\n",num);
    }
    return 0;
}
