#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h>
typedef struct stac{
    char *arr;
    int top;
    int size;

}stack;
int main(){
    stack s1;
    s1.top=-1;
    char str[10];
    gets(str);
    int len=strlen(str);
    s1.arr=(char*)malloc(len*(sizeof(char)));
    s1.size=len;
    for(int i=len-1;i>=0;i--){
        if(str[i]>='0' && str[i]<='9'){
            s1.top++;
            s1.arr[s1.top]=str[i];

        }
        else{
            char ch1=s1.arr[s1.top];
            s1.top--;
            char ch2=s1.arr[s1.top];
            s1.top--;
            if(str[i]=='+'){
                int x=ch1-'0';
                int y=ch2-'0';
                int res=x+y;
                char ch=res+'0';
                s1.top++;
                s1.arr[s1.top]=ch;

            }
            else if(str[i]=='-'){
                 int x=ch1-'0';
                int y=ch2-'0';
                int res=x-y;
                char ch=res+'0';
                  s1.top++;
                s1.arr[s1.top]=ch;

            }
            else if(str[i]=='*'){
                 int x=ch1-'0';
                int y=ch2-'0';
                int res=x*y;
                char ch=res+'0';
                  s1.top++;
                s1.arr[s1.top]=ch;
            }
            else if(str[i]=='/'){
                 int x=ch1-'0';
                int y=ch2-'0';
                int res=x/y;
                char ch=res+'0';
                  s1.top++;
                s1.arr[s1.top]=ch;
            }
            else{
                 int x=ch1-'0';
                int y=ch2-'0';
                int res=pow(x,y);
                char ch=res+'0';
                  s1.top++;
                s1.arr[s1.top]=ch;
            }
        }
    }
    char ch=s1.arr[s1.top];
    int res=ch-'0';
    printf("%d",res);





    return 0;
}