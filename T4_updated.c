#include <stdio.h>
int main(){
        char matrix[4][4] ;
	int movx_before=0;
	int movy_before=0;
	int movx_after=0;
	int movy_after=0;
	printf("enter x and y ");
        scanf("%d", &movx_after);
	scanf("%d", &movy_after);

	while (movx_after <4 && movy_after <4) {
       	for (int i=movx_before; i<movx_after; i++){
        for (int j=movy_before; j<movy_after; j++) {
                printf("%d\t%d", i,j);
}
        printf("\n");
}

        movx_before=movx_after;
        movy_before = movy_after;
	
	printf("enter new move x and y");
        scanf("%d", &movx_after); 
        scanf("%d", &movy_after);

        if (movx_after >= 4 || movy_after >= 4) {
            printf("You are out of boundaries.\n");
            break;
        }	
}


return 0;
}
