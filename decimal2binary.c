#include <stdio.h>

float* arr[32];
int idx=0;

int fun(int num){

	if(num==0){
		arr[idx]=idx;
		return 1;
	}else{

		printf("%d[%d] ",num,num%2);		

		arr[idx]=num%2;
		idx++;

		return fun(num/2);
	}
}



int main(int argc,char* argv[]){
	
	float i=175;
	int j=0;
	int a;
	int len;
	int x;

	if(argv[1]!=0){
		/*sscanf()的输入源来至字符串，
		第二个参数指定把这字符串格式化为什么样子，
		第三个参数就是处理后的结果*/
		sscanf(argv[1],"%f",&i);
		
	}
	
	printf("参数:%.2f\n",i);
	fun(i);

	printf("\n");	

	for(j=0;j<32;j++){
		if(arr[j]>1){
			len=j-1;
			break;
		}else{
			continue;
		}
	}


	printf("\n");

	for(a=len;a>=0;a--){
		printf("%d",arr[a]);
	}
	
	printf("\n");
	
	
	return 0;
}