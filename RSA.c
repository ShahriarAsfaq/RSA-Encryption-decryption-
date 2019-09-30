#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int gcd(int a, int b)
{

    int x,y;
    for(y=1; y <= a && y <= b; ++y)
    {
        if(a%y==0 && b%y==0)
            x = y;
    }
    return x;
}


void main()
{
    int N,Q,e,d,p,q;
    printf("Enter first prime no: ");
    scanf("%d",&p);
    printf("Enter second prime no: ");
    scanf("%d",&q);
    N=p*q;
    Q=(p-1)*(q-1);
    for(e=2;e<Q;e++){
        if(gcd(e,Q)==1)
            break;
    }
    for(d=rand()%100000;;d++){
        if(d!=1 && (d*e)%Q==1){
            break;
        }
    }
    crypto(e,d,N);

}

void crypto(int e, int d, int N)
{
    char a[1000];
    int p,i;
    printf("Enter the message you want to encrypt:\n");
    fflush(stdin);
    gets(a);
    printf("Your encrypted message will be:\n");
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
          p=((a[i]-'A')^e)%N;
          printf("%c",p+'A');
        }
        else if(a[i]>='a' && a[i]<='z'){
            p=((a[i]-'a')^e)%N;
            printf("%c",p+'a');
        }
        else
            printf("%c",a[i]);
    }
}
