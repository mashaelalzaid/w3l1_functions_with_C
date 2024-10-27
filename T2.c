#include <stdio.h>

int main()

{

	int N= 0;
	printf("P1. Enter value:\n");
	scanf("%d", &N);


        for (int i=2; i<=N; i++){
		if (N%i == 0){
			printf("Not prime");
		break;
		}
		else {printf("Prime");
		break;
		}
	
        }


}
