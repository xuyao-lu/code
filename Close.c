//服装销售管理系统

#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
struct FU{
	char h_num[10];//货号 
	char c_num[10];//尺寸 
	char color[10];//颜色 
	char price[10];//售价 
	char purchase_price[10];//进价
	char stock[10];//库存
	struct FU *next;
 } *head,*tail ;
 //函数定义 
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

FU*Getnode()//增加可读性 
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
	printf("                                                    登陆界面");
	printf("\n\n\n\n");
	
	printf("                                    ---------------------------------------\n");
	printf("                                   |   Name:                               |\n");
	
	printf("                                   |   Passwors:                           |\n");

	printf("                                    ---------------------------------------\n");
	printf("                                                                                   注：昵称，密码不宜过长。\n"); 
	gotoxy(44,10);
    scanf("%s",name);
    if(strcmp(name,"xuyao")!=0)
    {
    	printf("\n\n\n\n\n\n\n\n                                      没有该昵称，将会注册新账户，请记住您的密码\n"); 
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
	printf("页面跳转中.......");
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
	printf("\n-----------------------------------------------欢迎来到服装管理系统---------------------------------------------------\n\n\n\n");
	printf("                                                 请选择需要的服务\n\n");
	printf("                                                  1>添加服装信息\n\n");
	printf("                                                  2>查询服装信息\n\n");
	printf("                                                  3>删除服装信息\n\n");
	printf("                                                  4>修改服装信息\n\n");
	printf("                                                  5>退出登录\n\n\n");
	printf("                                                                                                 注：请在10秒内做出选择\n\n");
	printf("【     】");
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
	printf("\n\n\n                                               请输入货物信息\n\n\n\n");
	printf("                                                  货号：\n\n\n");
	printf("                                                  尺寸：\n\n\n");
	printf("                                                  颜色：\n\n\n");	
	printf("                                                  售价：\n\n\n");	
	printf("                                                  进价：\n\n\n");
	printf("                                                  库存：\n\n\n");	
	
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
    printf("\n                                                 查找方式\n\n\n\n");
          printf("                                                  1>货号\n\n\n");
          printf("                                                  2>库存\n\n\n");
          printf("                                                  3>价格\n\n\n");
          printf("                                                  4>颜色\n\n\n");
          printf("                                                  5>尺码\n\n\n");
          
    
    printf("【   】");
	gotoxy(3,20);
	scanf("%d",&num); 
	system("cls"); 
	if(num==1)
	{
		printf("\n\n\n\n                                              请输入货号：【             】");
		gotoxy(60,4); 
		scanf("%s",huohao) ;
		 
		while(q!=NULL)
		{
			if(strcmp(q->h_num,huohao)==0)
			{
				printf("\n\n\n                                                 货号：%s\n\n\n\n",q->h_num);
				printf("                                                 库存：%s\n\n\n\n",q->stock);
				printf("                                                 定价：%s\n\n\n\n",q->price);
				printf("                                                 颜色：%s\n\n\n\n",q->color);
				printf("                                                 尺码：%s\n\n\n\n",q->c_num);
				printf("                                                 进价：%s\n\n\n\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              不存在该货物\n\n\n\n\n\n");
			system("pause");
		}
		
	}
	else if(num==2)
	{
		printf("\n\n\n\n                                              请输入库存：【   】");
		gotoxy(61,4); 
		scanf("%s",kucun) ;
		FU *q=head;
		while(q!=NULL)
		{
			if(strcmp(q->h_num,kucun)==0)
			{
				printf("                                                 货号：%s\n",q->h_num);
				printf("                                                 库存：%s\n",q->stock);
				printf("                                                 定价：%s\n",q->price);
				printf("                                                 颜色：%s\n",q->color);
				printf("                                                 尺码：%s\n",q->c_num);
				printf("                                                 进价：%s\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              不存在该库存的货物\n\n\n\n\n\n\n");
			system("pause");
		}
		
		
	}
	else if(num==3)
	{
		printf("\n\n\n\n                                              请输入价格：【      】");
		gotoxy(61,4); 
		scanf("%s",jiage) ;
		FU *q=head;
		while(q!=NULL)
		{
			if(strcmp(q->h_num,jiage)==0)
			{
				printf("                                                 货号：%s\n",q->h_num);
				printf("                                                 库存：%s\n",q->stock);
				printf("                                                 定价：%s\n",q->price);
				printf("                                                 颜色：%s\n",q->color);
				printf("                                                 尺码：%s\n",q->c_num);
				printf("                                                 进价：%s\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              不存在该价格的货物\n\n\n\n\n\n\n");
			system("pause");
		}
	 } 
	 else if(num==4)
	 {
	 	printf("\n\n\n\n                                              请输入颜色：【       】");
	 	gotoxy(61,4); 
		scanf("%s",yanse) ;
		FU *q=head;
		while(q!=NULL)
		{
			if(strcmp(q->h_num,yanse)==0)
			{
				printf("                                                 货号：%s\n",q->h_num);
				printf("                                                 库存：%s\n",q->stock);
				printf("                                                 定价：%s\n",q->price);
				printf("                                                 颜色：%s\n",q->color);
				printf("                                                 尺码：%s\n",q->c_num);
				printf("                                                 进价：%s\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              不存在该颜色的货物\n\n\n\n\n\n\n");
			system("pause");
		}
	 }
	 else if(num==5)
	 {
	 	printf("\n\n\n\n                                              请输入尺码：【     】");
	 	gotoxy(61,4); 
		scanf("%s",chima) ;
		FU *q=head;
		while(q!=NULL)
		{
			if(strcmp(q->h_num,chima)==0)
			{
				printf("                                                 货号：%s\n",q->h_num);
				printf("                                                 库存：%s\n",q->stock);
				printf("                                                 定价：%s\n",q->price);
				printf("                                                 颜色：%s\n",q->color);
				printf("                                                 尺码：%s\n",q->c_num);
				printf("                                                 进价：%s\n",q->purchase_price);
				system("pause"); 
				break;
			}
			q=q->next;
		}
		if(q==NULL)
		{
			printf("\n\n\n\n                                              不存在该尺码的货物\n\n\n\n\n\n\n");
			system("pause");
		}
	 }
    
}

void quit()
{
	system("cls");
	system("color e2");
	printf("\n\n\n\t\t\t\t\t\t感谢您的使用\n\n\n");
	printf("\t\t\t\t\t\t    谢谢\n\n\n"); 
	xin();
	printf("\t\t\t\t\t\t\t\t\t\t请按任意键退出\n\n");
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
	printf("\n\n\n                                           请输入要删除的货号:【   】\n\n\n\n");
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
	 	printf("\n\n\n                                           未有这件货物\n                                           删除失败\n\n\n\n");
	 	system("pause") ;
	 }
	 else
	 {
	 	printf("\n\n\n                                           删除成功\n\n\n\n");
	 	system("pause") ;
	  } 
	
}

void xiugai()
{
	int flag=1;
	FILE *fp=fopen("fuzhuang.txt","a+");
	system("cls");
	printf("\n\n\n                                           请输入要修改的货号:【   】\n\n\n\n");
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
	printf("\n\n\n                                         请输入需要修改的货物信息\n\n\n\n");
          printf("                                                  货号：\n\n\n");
	printf("                                                  尺寸：\n\n\n");
	printf("                                                  颜色：\n\n\n");	
	printf("                                                  售价：\n\n\n");	
	printf("                                                  进价：\n\n\n");
	printf("                                                  库存：\n\n\n");
	
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
	printf("\n\n\n                                         请输入需要修改的货物信息\n\n\n\n");
          printf("                                                  货号：\n\n\n");
	printf("                                                  尺寸：\n\n\n");
	printf("                                                  颜色：\n\n\n");	
	printf("                                                  售价：\n\n\n");	
	printf("                                                  进价：\n\n\n");
	printf("                                                  库存：\n\n\n");
	
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
	 	printf("\n\n\n                                           未有这件货物\n                                           修改失败\n\n\n\n");
	 	system("pause") ;
	 }
	 else
	 {
	 	printf("\n\n\n                                           修改成功\n\n\n\n");
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
 
 
 
 
 
