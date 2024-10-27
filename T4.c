#include <stdio.h>
int main(){
        char matrix[4][4] ;
        int row=0;
        int col=0;
        for (int i=0; i<4; i++){
        for (int j=0; j<4; j++) {
                matrix[i][j] = i+j;
                printf("%d\t", matrix[i][j]);
}
        printf("\n");
}
while (row >=0 && col >= 0 && row<4 && col <4)
{
        printf("you are now in row %d and col %d which equals %d in the matri.x\n", row, col, matrix[row][col]);
        printf("enter row \n");
        scanf("%d", &row);
        printf("enter column \n");
        scanf("%d", &col);
}
printf("you are out of boundries");
}


