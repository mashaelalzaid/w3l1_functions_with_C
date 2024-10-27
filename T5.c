#include <stdio.h>
int main(){
        int N;
        printf("Enter N:\n");
        scanf(" %d", &N);
        char array[N];
        int iter = 0;
        char c;
while (iter < N)
{
        printf("enter a letter \n");
        scanf(" %c", &c);
        array[iter] = c;
        iter++;
}
printf("the output is\n");
for (int itr =0; itr<N; itr++){
printf("%c\t", array[itr]);
}
int a =0;
int e=0;
int i=0;
int o=0;
int u=0;
int others=0;
for (int itr =0; itr<N; itr++){
switch(array[itr]){
case 'a': a+=1;
break;
case 'e': e+=1;
break;
case 'i': i+=1;
break;
case 'o': o+=1;
break;
case 'u': u+=1;
break;
default:
others+=1;
break;
}
}
printf("\na is %d\ne is %d\ni is %d\no is %d\nu is %d\nothers is %d", a,e,i,o,u,others);
}

