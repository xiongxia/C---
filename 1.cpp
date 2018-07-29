#include<stdio.h>
#include<string.h>
int main(){
	char str1[10000] = {0};
	char str2[10000] = {0};
	char *p,*q;
	int n =0; 
	
	gets(str1);
	gets(str2);

	p = str2;
	q = str2;
	
	while(1)
	{
		q = strstr(p,str1);
        if(q == NULL)
        {
        	if(n == 0)
        		printf("-1");
        	break;		
		}
		n++;
		p = q + 1;
		printf("%d ",q-str2);
		
	}
	
	return 0;
}

