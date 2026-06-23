#include<stdio.h>
int main()
{
    FILE *p;
    p=fopen("in.txt","r");
    if(p==NULL)
{
    printf("file cannot be found");
return 1;
}
int freq[256]={0};
int c;
while((c=fgetc(p))!=EOF){

freq[c]++;

      }
        for (int i=0;i<256;i++){

            if(freq[i]>0)
            {
                printf("%c:%d\n",i,freq[i]);
            }
        }

}
