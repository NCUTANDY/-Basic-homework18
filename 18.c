#include<stdio.h> 

#include<string.h> 

void main()

{

    char str[20]; 

    int num,num1[256]={0}; 

	printf("-------------------------------------------------\n");

	printf("              ��C�ӼƦr�X�{������               \n");

	printf("-------------------------------------------------\n");    

    printf("��J�@�ӳs���ơG");  

    scanf("%s",str);  

    for(num=0;num<strlen(str);num++) 

        num1[(int)str[num]]++; 

    for(num=0;num<256;num++) 

        if(num1[num]!=0)

            printf("�r��%c�X�{%d��\n",(char)num,num1[num]);

}
