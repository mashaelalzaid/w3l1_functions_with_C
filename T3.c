#include <stdio.h>

int main()

{

	int N= 0;
	printf("Enter Number of cities\n");
	scanf("%d", &N);
	float size=0;
	float population[N];
	for (int i=0; i<N; i++){
		printf("population of city %d: ",i);
		scanf("%f", &size);
		population[i] = size;
	        printf("\n");
}


	float sum = 0.0;
	float average =0.0;

	for(int i=0; i<N; i++){
		sum = sum + population[i];
	}
	average = sum/N;

	printf("average is: %f\n", average);


	float max =  population[0];
	float min = max;
	for(int i=1;i<N;i++){
		if (max > population[i]){continue;}
		else {max = population[i];}
 		if (min < population[i]){continue;}
                else {min = population[i];}
	}
	printf("max is %f\n", max);
	printf("min is %f\n", min);

	return 0;

}
