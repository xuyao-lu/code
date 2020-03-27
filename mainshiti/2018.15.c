#include<stdio.h>
#include<string.h>
static void paixu(int[],int n);
int main()
{
    int arr[10]={10,3,2,4,5,3,6,7,3,5};
    paixu(arr,10);
}
static void paixu(int arr[],int n){
        if(n==0||n==1){
            return;
        }

        int i=0;
        int j=n-1;
        int temp;
        while(i<j){
            if(arr[i]%2==1){
                i++;
                continue;
            }

            if(arr[j]%2==0){
                j--;
                continue;
            }

            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }

        for(int i=0;i<10;i++)
        {
            printf("%d  ",arr[i]);
        }
        printf("\n");
    }
