//��װ���۹���ϵͳ

#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
struct FU{
	char h_num[10];//���� 
	char c_num[10];//�ߴ� 
	char color[10];//��ɫ 
	char price[10];//�ۼ� 
	char purchase_price[10];//����
	char stock[10];//���
	struct FU *next;
 } *head,*tail ;
 //�������� 
void welcome();
void denglu();
void xin();
void shurumima();
void gotoxy(int x, int y);
void tiaozhuan();
int xuanxiang();
void tianjia();
void quit();
void chaxun();
void jiazai();
void shanchu();
void xiugai();

FU*Getnode()//���ӿɶ��� 
{
    FU* node=(FU*)malloc(sizeof(FU));
	node->next=NULL;
	return node; 
}


 
void welcome(){
	system("color d");
	system("cls");
	
	printf("\n");
 	printf("------------------------------------------------------------------------------------------------------------------------\n");
 	
	 printf("\t\t\t\t\t  welcome to xuyao's couture.\n");	
	 printf("\n\n"); 


    xin();
	 
  system("pause");
  } 

void denglu()
{
	system("color b");
	char name[10];
	system("cls");
	printf("\n\n\n\n\n"); 
	printf("                                                    ��½����");
	printf("\n\n\n\n");
	
	printf("                                    ---------------------------------------\n");
	printf("                                   |   Name:                               |\n");
	
	printf("                                   |   Passwors:                           |\n");

	printf("                                    ---------------------------------------\n");
	printf("                                                                                   ע���ǳƣ����벻�˹�����\n"); 
	gotoxy(44,10);
    scanf("%s",name);
    if(strcmp(name,"xuyao")!=0)
    {
    	printf("\n\n\n\n\n\n\n\n                                      û�и��ǳƣ�����ע�����˻������ס��������\n"); 
	}
    gotoxy(48,11);
  }  
  void shurumima()
{

	char a[20];int i=0;
	while((a[i]=getchar())!='\r')
	{
		if(a[i]=='\b')
		{
			printf("\b \b");
			i--;
		}
		else
		{
			printf("*");
			i++;
		}
	}
	a[i]='\0';
	
}
void tiaozhuan()
{
	gotoxy(90,20);
	printf("ҳ����ת��.......");
    system("pause");
	system("cls");

}

void xin()
{
	int i,j;
printf("\t\t\t\t\t");
printf("     ******       ******\n"
"\t\t\t\t\t   **********   **********\n"
"\t\t\t\t\t ************* *************\n");

for(i=0;i<3;i++)
{printf("\t\t\t\t\t");
for(j=0;j<29;j++)
printf("*");
printf("\n");
}

for(i=0;i<7;i++)
{printf("\t\t\t\t\t");
for(j=0;j<2*(i+1)-1;j++)
printf(" ");
for(j=0;j<27-i*4;j++)
printf("*");
printf("\n");
}
printf("\t\t\t\t\t");
for(i=0;i<14;i++)
printf(" ");
printf("*\n");
}


void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}

int xuanxiang()
{
	system("cls");
	int num;
	printf("\n-----------------------------------------------��ӭ������װ����ϵͳ---------------------------------------------------\n\n\n\n");
	printf("                                                 ��ѡ����Ҫ�ķ���\n\n");
	printf("                                                  1>��ӷ�װ��Ϣ\n\n");
	printf("                                                  2>��ѯ��װ��Ϣ\n\n");
	printf("                                                  3>ɾ����װ��Ϣ\n\n");
	printf("                                                  4>�޸ķ�װ��Ϣ\n\n");
	printf("                                                  5>�˳���¼\n\n\n");
	printf("                                                                                                 ע������10��������ѡ��\n\n");
	printf("��     ��");
	printf("\n\n\n\n\n\n\n") ;
	gotoxy(4,20);
	scanf("%d",&num);
	return num;
}

void gongneng(int number)
{
	
	if(number==1)
	tianjia();
	else if(number==2)
	chaxun();
	else if(number==3)
	shanchu();
    else if(number==4)
     xiugai();
	else if(number==5) 
	quit();
}

void tianjia()
{
	
	system("cls");
	FILE *fp=fopen("fuzhuang.txt","a+");
	printf("\n\n\n                                               �����������Ϣ\n\n\n\n");
	printf("                                                  ���ţ�\n\n\n");
	printf("                                                  �ߴ磺\n\n\n");
	printf("                                                  ��ɫ��\n\n\n");	
	printf("                                                  �ۼۣ�\n\n\n");	
	printf("                                                  ���ۣ�\n\n\n");
	printf("                                                  ��棺\n\n\n");	
	
	 struct FU *q=head;
     q=(struct FU *)malloc(sizeof(struct FU));
    gotoxy(56,7);
	scanf("%s",q->h_num); 
	fprintf(fp,"%s  ",q->h_num);
	gotoxy(56,10);
	scanf("%s  ",q->c_num);
	fprintf(fp,"%s  ",q->c_num);
	gotoxy(56,13);
	scanf("%s",q->color);
	fprintf(fp,"%s  ",q->color);
	gotoxy(56,16);
	scanf("%s",q->price);
	fprintf(fp,"%s  ",q->price);
	gotoxy(56,19);
	scanf("%s",q->purchase_price);
	fprintf(fp,"%s  ",q->purchase_price);
	gotoxy(56,22);
	scanf("%s",q->stock);
	fprintf(fp,"%s  ",q->stock);
   
        if(head == NULL)
        {
             head = q;
             head->next = NULL;
        }
       if(tail != NULL)
       {
           tail->next = q;
       }
        tail = q;
        tail->next = NULL;
       
       
fprintf(fp,"\n");

fclose(fp);
     	
}

void chaxun()
{
	
	struct FU * q=head;
	char huohao[10];
	char kucun[10];
	char jiage[10];
	char yanse[10];
	char chima[10];	
	system("cls");
	int num;
    printf("\n                                                 ���ҷ�ʽ\n\n\n\n");
          printf("                                                  1>����\n\n\n");
          printf("                                                  2>���\n\n\n");
          printf("                                                  3>�۸�\n\n\n");
          printf("                                                  4>��ɫ\n\n\n");
          printf("                                                  5>����\n\n\n");
          
    
    printf("��   ��");
	gotoxy(3,20);
	scanf("%d",&num); 
	system("cls"); 
	if(num==1)
	{
		printf("\n\n\n\n                                              ��������ţ���             ��");
		gotoxy(60,4); 
		scanf("%s",huohao) ;
		 
		while(q!=NULL)
		{
			if(strcmp(q->h_num,huohao)==0)
			{
				printf("\n\n\n                                                 ���ţ�%s\n\n\n\n",q->h_num);
				printf("                                                 ��棺%s\n\n\n\n",q->stock);
				printf("                                                 ���ۣ�%s\n\n\n\n",q->price);
				printf("                                                 ��ɫ��%s\n\n\n\n",q->color);
				printf("                                                 ���룺%s\n\n\n\n",q->c_num);
				printf("                                                 ���ۣ�%s\n\n\n\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              �����ڸû���\n\n\n\n\n\n");
			system("pause");
		}
		
	}
	else if(num==2)
	{
		printf("\n\n\n\n                                              �������棺��   ��");
		gotoxy(61,4); 
		scanf("%s",kucun) ;
		FU *q=head;
		while(q!=NULL)
		{
			if(strcmp(q->h_num,kucun)==0)
			{
				printf("                                                 ���ţ�%s\n",q->h_num);
				printf("                                                 ��棺%s\n",q->stock);
				printf("                                                 ���ۣ�%s\n",q->price);
				printf("                                                 ��ɫ��%s\n",q->color);
				printf("                                                 ���룺%s\n",q->c_num);
				printf("                                                 ���ۣ�%s\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              �����ڸÿ��Ļ���\n\n\n\n\n\n\n");
			system("pause");
		}
		
		
	}
	else if(num==3)
	{
		printf("\n\n\n\n                                              ������۸񣺡�      ��");
		gotoxy(61,4); 
		scanf("%s",jiage) ;
		FU *q=head;
		while(q!=NULL)
		{
			if(strcmp(q->h_num,jiage)==0)
			{
				printf("                                                 ���ţ�%s\n",q->h_num);
				printf("                                                 ��棺%s\n",q->stock);
				printf("                                                 ���ۣ�%s\n",q->price);
				printf("                                                 ��ɫ��%s\n",q->color);
				printf("                                                 ���룺%s\n",q->c_num);
				printf("                                                 ���ۣ�%s\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              �����ڸü۸�Ļ���\n\n\n\n\n\n\n");
			system("pause");
		}
	 } 
	 else if(num==4)
	 {
	 	printf("\n\n\n\n                                              ��������ɫ����       ��");
	 	gotoxy(61,4); 
		scanf("%s",yanse) ;
		FU *q=head;
		while(q!=NULL)
		{
			if(strcmp(q->h_num,yanse)==0)
			{
				printf("                                                 ���ţ�%s\n",q->h_num);
				printf("                                                 ��棺%s\n",q->stock);
				printf("                                                 ���ۣ�%s\n",q->price);
				printf("                                                 ��ɫ��%s\n",q->color);
				printf("                                                 ���룺%s\n",q->c_num);
				printf("                                                 ���ۣ�%s\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              �����ڸ���ɫ�Ļ���\n\n\n\n\n\n\n");
			system("pause");
		}
	 }
	 else if(num==5)
	 {
	 	printf("\n\n\n\n                                              ��������룺��     ��");
	 	gotoxy(61,4); 
		scanf("%s",chima) ;
		FU *q=head;
		while(q!=NULL)
		{
			if(strcmp(q->h_num,chima)==0)
			{
				printf("                                                 ���ţ�%s\n",q->h_num);
				printf("                                                 ��棺%s\n",q->stock);
				printf("                                                 ���ۣ�%s\n",q->price);
				printf("                                                 ��ɫ��%s\n",q->color);
				printf("                                                 ���룺%s\n",q->c_num);
				printf("                                                 ���ۣ�%s\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              �����ڸó���Ļ���\n\n\n\n\n\n\n");
			system("pause");
		}
	 }
    
}

void quit()
{
	system("cls");
	system("color e2");
	printf("\n\n\n\t\t\t\t\t\t��л����ʹ��\n\n\n");
	printf("\t\t\t\t\t\t    лл\n\n\n"); 
	xin();
	printf("\t\t\t\t\t\t\t\t\t\t�밴������˳�\n\n");
}
 
void jiazai()
{
	FILE *fp=fopen("fuzhuang.txt","r");
	struct FU*q=Getnode();
	
	while(fscanf(fp,"%s", q->h_num)!=EOF)
	{
		fscanf(fp,"%s", q->c_num);
		fscanf(fp,"%s", q->color);
		fscanf(fp,"%s", q->price);
		fscanf(fp,"%s", q->purchase_price);
		fscanf(fp,"%s", q->stock);
		
		if(head == NULL){
             tail = head = q;
             continue;
        }
        tail->next = q;
        tail = q;
        q=Getnode();
	}
	fclose(fp);
}

void shanchu()
{
	system("cls");
	printf("\n\n\n                                           ������Ҫɾ���Ļ���:��   ��\n\n\n\n");
	gotoxy(65,3); 
	char h_num[10];
	scanf("%s",h_num);
	struct FU *p=head;
	struct FU *q=p->next;
	
	if(strcmp(q->h_num,h_num)==0)
	{
		p->next=q->next;
	 } 
	 else if(strcmp(head->h_num,h_num)==0)
	 {
	 	q=q->next;
	 	p=head->next;
	 	p->next=q;	
	 }
	 else 
	 {
	 	q=q->next;
	 	p=p->next;
	 }
	 if(p==NULL)
	 {
	 	printf("\n\n\n                                           δ���������\n                                           ɾ��ʧ��\n\n\n\n");
	 	system("pause") ;
	 }
	 else
	 {
	 	printf("\n\n\n                                           ɾ���ɹ�\n\n\n\n");
	 	system("pause") ;
	  } 
	
}

void xiugai()
{
	int flag=1;
	FILE *fp=fopen("fuzhuang.txt","a+");
	system("cls");
	printf("\n\n\n                                           ������Ҫ�޸ĵĻ���:��   ��\n\n\n\n");
	gotoxy(65,3); 
	char h_num[10];
	scanf("%s",h_num);
	struct FU *p=head;
	struct FU *q=p->next;
	while(flag)
	{
		
	
	if(strcmp(q->h_num,h_num)==0)
	{
		flag=0;
		system("cls"); 
	printf("\n\n\n                                         ��������Ҫ�޸ĵĻ�����Ϣ\n\n\n\n");
          printf("                                                  ���ţ�\n\n\n");
	printf("                                                  �ߴ磺\n\n\n");
	printf("                                                  ��ɫ��\n\n\n");	
	printf("                                                  �ۼۣ�\n\n\n");	
	printf("                                                  ���ۣ�\n\n\n");
	printf("                                                  ��棺\n\n\n");
	
	gotoxy(56,7);
	scanf("%s",q->h_num); 
	fprintf(fp,"%s  ",q->h_num);
	gotoxy(56,10);
	scanf("%s  ",q->c_num);
	fprintf(fp,"%s  ",q->c_num);
	gotoxy(56,13);
	scanf("%s",q->color);
	fprintf(fp,"%s  ",q->color);
	gotoxy(56,16);
	scanf("%s",q->price);
	fprintf(fp,"%s  ",q->price);
	gotoxy(56,19);
	scanf("%s",q->purchase_price);
	fprintf(fp,"%s  ",q->purchase_price);
	gotoxy(56,22);
	scanf("%s",q->stock);
	fprintf(fp,"%s  ",q->stock);
	
	fprintf(fp,"\n");
	
	 } 
	 else if(strcmp(head->h_num,h_num)==0)
	 {
	 	flag=0;
	 	system("cls"); 
	printf("\n\n\n                                         ��������Ҫ�޸ĵĻ�����Ϣ\n\n\n\n");
          printf("                                                  ���ţ�\n\n\n");
	printf("                                                  �ߴ磺\n\n\n");
	printf("                                                  ��ɫ��\n\n\n");	
	printf("                                                  �ۼۣ�\n\n\n");	
	printf("                                                  ���ۣ�\n\n\n");
	printf("                                                  ��棺\n\n\n");
	
	gotoxy(56,7);
	scanf("%s",p->h_num); 
	fprintf(fp,"%s  ",p->h_num);
	gotoxy(56,10);
	scanf("%s  ",p->c_num);
	fprintf(fp,"%s  ",p->c_num);
	gotoxy(56,13);
	scanf("%s",p->color);
	fprintf(fp,"%s  ",p->color);
	gotoxy(56,16);
	scanf("%s",p->price);
	fprintf(fp,"%s  ",p->price);
	gotoxy(56,19);
	scanf("%s",p->purchase_price);
	fprintf(fp,"%s  ",p->purchase_price);
	gotoxy(56,22);
	scanf("%s",p->stock);
	fprintf(fp,"%s  ",p->stock);
	
	fprintf(fp,"\n");
	 }
	 else 
	 {
	 	q=q->next;
	 	p=p->next;
	 }
}
	 if(p==NULL)
	 {
	 	printf("\n\n\n                                           δ���������\n                                           �޸�ʧ��\n\n\n\n");
	 	system("pause") ;
	 }
	 else
	 {
	 	printf("\n\n\n                                           �޸ĳɹ�\n\n\n\n");
	 	system("pause") ;
	  } 
	fclose(fp);
}

int main(){
    int number;
	head=tail=NULL;
	//jiazai();
 welcome(); 
 denglu();
 shurumima();
 tiaozhuan();	
 while(1)
 {
 	if(number==5)
 	break;
 	else
 	{
 		 number=xuanxiang();
  gongneng(number);	
	 }
 }
 } 
 
 
 
 
 

