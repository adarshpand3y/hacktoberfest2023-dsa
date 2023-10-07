#include<stdio.h>

void toh(char,char,char,int);
int count=0;

int main(){
    int n;
    printf("Enter No of Disk:");
    scanf("%d",&n);
    toh('A','B','C',n);
    printf("No. of Moves:%d\n",count);
    return 0;
}

void toh(char a,char b,char c,int n){
    if(n==1){
        printf("%c -> %c\n",a,c);
        count++;
    }
    else{
        toh(a,c,b,(n-1));
        toh(a,b,c,1);
        toh(b,a,c,(n-1));
    }
}