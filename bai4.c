#include<stdio.h>
int indexmin(int a);
int main(){
    int x[10],d;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("nhap so thu %d\t",i);
        scanf("%d",&x[i]);
        d=indexmin(x[i]);
    }
    printf("%d",d);

}
int indexmin(int a){
    int max =0;
    {if(max < a)
    max=a;
    }
    return max;
}