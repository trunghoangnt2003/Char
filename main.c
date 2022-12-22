//
//  main.c
//  file
//

//
#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

char *Num(char *s,int n)
{
    int i=0;
    char *res=(char*)malloc(1000*sizeof(char));
    while(s[i]!='.')
    {
        res[i]=s[i];
        i++;
    }// ket thuc vong lap chi so s[i]='.'
    int check=i+n; //bat dau tinh tu vi tri ('.')
    for(int j=i;j<=check;j++)
    {
        res[j]=s[j];
    }
    return res;
    
}
int main()
{
    char s[1000];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    printf("%s",Num(s, n));
    
    
    
    
}
