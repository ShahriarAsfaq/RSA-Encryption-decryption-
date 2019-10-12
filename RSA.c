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
        if(fn(e,Q)==1)
            break;
    }
    for(d=rand()%100000;;d++){
        if(d!=1 && (d*e)%Q==1){
            break;
        }
    }
    encript(e,d,N);

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
    gets(a);
    printf("The encrypted message is:\n");
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
          p=(int)(pow((a[i]-'A'),e))%N;
          printf("%c",p+'A');
        }
        else if(a[i]>='a' && a[i]<='z'){
            p=(int)(pow((a[i]-'a'),e))%N;
            printf("%c",p+'a');
        }
        else
            printf("%c",a[i]);
    }
}
