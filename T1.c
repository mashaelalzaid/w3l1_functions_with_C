#include <stdio.h>

int main()

{

	int N= 0;
	printf("P1. Enter value:\n");
	scanf("%d", &N);

	while (N>=0)
	{
	printf("%d", N);
	printf("\n");
	N--;
	}


	printf("\n\n");
	printf("P2. Enter N Values\n");
	scanf("%d", &N);
	float ind=0.0;
	printf("P2. Enter increment value (has to be less than 1):\n");
        scanf("%f", &ind);

        for (float i=0; i<=N; i+=ind){
		if (ind >=1){
			printf("increments have to be less than 1");
			break;
		}
	
                printf("%f", i);
	        printf("\n");
        }

	printf("\n\n");

        printf("P3. Enter value (digit will be skipped if the right most digit is 4 or ):\n");
        scanf("%d", &N);
	
	for (int i=0; i<=N; i++){
		int last_digit =i % 10;
		if (last_digit == 4 || last_digit ==7)
		{ continue;
		}	
		printf("%d", i);
	        printf("\n");
}
	return 0;

}
