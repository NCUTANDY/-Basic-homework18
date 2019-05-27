#include<stdio.h> 

#include<string.h> 

void main()

{

    char str[20]; 

    int num,num1[256]={0}; 

	printf("-------------------------------------------------\n");

	printf("              衡–计瞷Ω计               \n");

	printf("-------------------------------------------------\n");    

    printf("块硈﹃俱计");  

    scanf("%s",str);  

    for(num=0;num<strlen(str);num++) 

        num1[(int)str[num]]++; 

    for(num=0;num<256;num++) 

        if(num1[num]!=0)

            printf("才%c瞷%dΩ\n",(char)num,num1[num]);

}
