#include<stdio.h>
int main(){
  
  int i,count=0,index=-1;
  char a,ch,str[80];
  scanf("%c\n",&a);
  ch=getchar();
  for(i=0;ch!='\n';i++){
    str[i]=ch;
    count++;
    ch=getchar();
  }
  for(i=0;i<count;i++){
    if(a==str[i])
    index=i;
  }
  if(index!=-1)
  printf("index = %d",index);
  else 
  printf("Not Found");
  return 0;
  
}
