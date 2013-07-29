#define GET_ARR_LENGTH(arr,len){len=(sizeof(arr)/sizeof(arr[0]));}
#include <stdio.h>
#include <math.h>
int main(int argc,char *argv[]){


//decimal
	char* c="10101111";//175

	int i,len,tmp;
	float result=0.0f;
	float j;//binary bit
	float arr[64];
		if(argv[1]!=0){
		c=argv[1];
	}
	len=strlen(c);

	printf("参数:%s\n长度:%d\n\n",c,len);


	for(i=len-1;i>=0;i--){
		j=c[i]-48;
	
		tmp=j*pow(2,(len-1)-i);
		
		arr[i]=tmp;
		result+=tmp;

		printf("(%.0f*2^%d=[%.0f])",j,len-1-i,arr[i]);
		if(i!=0){
			printf(" + \n");
		}
	
	}
	printf("\n\n");
	for(i=0;i<=len-1;i++){
			printf("%.0f",arr[i]);
			if(i!=len-1){
				printf("+");
			}else{
				printf("=");
			}
	}

	printf("%.0f\n\n",result);
	










	return result;
}