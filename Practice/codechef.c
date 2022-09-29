#include<stdio.h>
main()
{
	int t[10],i,N,K,E,M,j,tes,num,f,arr[100][100],sum[100],ser_sum,rec_sum,result;
	scanf("%d",&tes);
	
	for(f=0;f<tes;f++)
	{
		scanf("%d",&N);
		scanf("%d",&K);
		scanf("%d",&E);
		scanf("%d",&M);
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<E;j++)
			{
				if(i==N-1&&j==E-1)
				break;
				scanf("%d",&arr[i][j]);
			}
		}
		
		for(i=0;i<N;i++)
		{
			sum[i]=0;
			for(j=0;j<E;j++)
			{
				sum[i]=sum[i]+arr[i][j];
			}
		}
		
		for(i=0;i<K;i++)
		{
			for(j=0;j<N-1;j++)
			{
				if(sum[i]<sum[j+1])
				{
					ser_sum=sum[i];
					sum[i]=sum[j+1];
					sum[j+1]=ser_sum;
				}
			}
			rec_sum=sum[i];
		}
		
		result=(rec_sum-sum[N-1])+1;
		
		if(result>M)
		printf("Impossible");
		
		else
		printf("%d",result);
		
		
			
		
		
	}
}
