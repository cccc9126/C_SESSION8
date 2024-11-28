#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a[3][4]={{1,3,5,4},{5,4,5,5},{7,3,9,8}};
    int maxCount = 0,maxElement=a[0][0];
    
    for(int i =0;i<3;i++){
        for(int j=0 ; j<4;j++){
            int count =0;
            for(int x=0;x<3;x++){
                for(int y =0 ;y<4;y++){
                    if(a[i][j]==a[x][y]){
                        count++;
                    }

                }
            }
            if(count>maxCount){
                maxCount=count;
                maxElement=a[i][j];
            }
        }
    }
    printf("so lan xuat hien cua %d la %d lan",maxElement,maxCount);
    return 0;
}

