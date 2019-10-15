#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int N,Q,e,d,p,q;
    printf("Enter a prime no: ");
    scanf("%d",&p);
    printf("Enter another prime no: ");
    scanf("%d",&q);
    N=p*q;
    Q=(p-1)*(q-1);
    for(e=2;e<Q;e++){
        if(fn(e,Q)==1&&fn(e,N)==1)
            break;
    }
    for(d=2;;d++){
        if((d*e)%Q==1){
            break;        }
    }
    encript(e,d,N);
    decript(e,d,N);
   
}

int fn(int a, int b)
{

    int x,y;
    for(y=1; y <= a && y <= b; ++y)
    {
        if(a%y==0 && b%y==0)
            x = y;
    }
    return x;
}

void encript(int e, int d, int N)
{
    char a[1000];
    int p,i;
    printf("Enter the normal message:\n");
    fflush(stdin);
    scanf("%s",a);
    printf("The encrypted message is:\n");
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
          p=(int)(pow((a[i]-64),e))%N;
          printf("%c",p+64);
        }
        else if(a[i]>='a' && a[i]<='z'){
            p=(int)(pow((a[i]-96),e))%N;
            printf("%c",p+96);
        }
        else
            printf("%c",a[i]);
    }
}

void decript(int e, int d, int N)
{
    char a[1000];
    int p,i;
    printf("\nEnter the encrypted message:\n");
    fflush(stdin);
    scanf("%s",a);
    printf("The decrypted message is:\n");
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
          p=(int)(pow((a[i]-64),d))%N;
          printf("%c",p+64);
        }
        else if(a[i]>='a' && a[i]<='z'){
            p=(int)(pow((a[i]-96),d))%N;
            printf("%c",p+96);
        }
        else
            printf("%c",a[i]);
    }
}
