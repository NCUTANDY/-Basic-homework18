#include<stdio.h> 

#include<string.h> 

void main()

{

    char str[20]; 

    int num,num1[256]={0}; 

	printf("-------------------------------------------------\n");

	printf("              算每個數字出現的次數               \n");

	printf("-------------------------------------------------\n");    

    printf("輸入一個連串整數：");  

    scanf("%s",str);  

    for(num=0;num<strlen(str);num++) 

        num1[(int)str[num]]++; 

    for(num=0;num<256;num++) 

        if(num1[num]!=0)

            printf("字符%c出現%d次\n",(char)num,num1[num]);

}
