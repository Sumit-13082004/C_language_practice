#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	char str[a];
	int V=0,W=0,V_temp=0,count=0,V_ans=0,W_ans,min,max,i;
	
	printf("Enter a string:");
	scanf("%s",str);
	
	for(i=0;str[i];i++)
	{
		if(str[i]!='v'&&str[i]!='w')
		count++;
		
		else if(str[i]=='v')
		{
			V++;
			if(V%2==0)
			V_ans++;
		}
		
		else if(str[i]=='w')
		W++;
	}
	
	if(V%2!=0)
	count++;
	
	W_ans=(W*2);
	
	min=count+V_ans+W;
	max=count+W_ans+V;
	
	printf("%d %d",min,max);
	
	
	
	
	
}
