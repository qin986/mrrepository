#include <stdio.h>

int main(){

	int a[50];

	int i,j,maxCount=0,index=0,nCount=0;

	int n;

	printf("������n����ֵ��");

	scanf("%d",&n);

	for(i=0;i<n;i++){    

		scanf("%d",&a[i]);

	}

	for(i=0;i<n;i++) {   

		for(j=0;j<n;j++)   

		{      

			if(a[j]==a[i])        

			nCount++;     

		}	
		if(nCount>maxCount){		
			maxCount=nCount;       

                index=i;      

		}   

                nCount=0;   

	}

printf("����Ϊ��%d\n����Ϊ��%d\n",a[index],maxCount);
return 0;
}