#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[2][3]={{1,4,13},{7,9,5}};
        int max = a[0][0];
        for(int i =0;i<2;i++){
            for(int j=0;j<3;j++){
                if(max<a[i][j]){
                    max=a[i][j];
                    
                }
            }
        }
    printf("so lon nhat la %d\n", max);
    return 0;
}
