#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void intd_to_charx(char ch[],int c)
{
    char temp[5];
    int i=0;//代表最後共有幾個字元在temp中
    while(c>0)
    {
        int b=c%16;
        c=c/16;
        if(b<10)
        {
            temp[i]=b+48; //轉成字元中的數字
        }
        else
        {
            if(b==10)
                temp[i]='a';
            if(b==11)
                temp[i]='b';
            if(b==12)
                temp[i]='c';
            if(b==13)
                temp[i]='d';
            if(b==14)
                temp[i]='e';
            if(b==15)
                temp[i]='f';
        }
        i++;
    }
    for(int j=0;j<i;j++)
    {
        ch[j]=temp[i-j-1];
    }
    if(i==0)
        i=1;
    ch[i]='\0';
}

int char_to_intd(char ch)
{
    if(ch>=48 && ch<=57) //ch is number
    {
        return ch-48;
    }
    else //ch is a b c d e f --> 10 11 12 13 14 15
    {
        return ch-87;
    }
}

void ff(char a[])
{
    int i=0,odd=0,even=0;
    while(a[i]!='\0')
    {
        if(i%2==0)
        {
            even=even+char_to_intd(a[i]);
        }
        else
        {
            odd=odd+char_to_intd(a[i]);
        }
        i++;
    }
    char ch[5];
    ch[0]='0'; //樣考慮 even==0 odd==0的情況
    intd_to_charx(ch,even);
    //printf("%s\n",ch);
    if(even>15) //先遞迴偶數
    {
        ff(ch);
    }
    else
    {
        printf("%c",ch[0]);
    }
    ch[0]='0';
    intd_to_charx(ch,odd);
    //printf("%s\n",ch);
    if(odd>15) //再遞迴奇數
    {
        ff(ch);
    }
    else
    {
        printf("%c",ch[0]);
    }
}

int main()
{
    char a[10001];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            //printf("%c",a[i]);
            a[i]=a[i]+32;
        }
    }
    //printf("%s",a);
    ff(a);
    return 0;
}