#define ARR_LENGTH(array,len){len=(sizeof(array)/sizeof(array[0]));}

#include <stdio.h>
int main(){
	
	int i=0,j=0;
	int tmp=0;
	int arr[10]={5,3,15,646,265,2,1,65,78,13};

	int len=0;
	//使用宏获取数组的长度
	ARR_LENGTH(arr,len);
	printf("使用宏获取数组大小:%d\n",len);

//	printf("arr size:%d\n",sizeof(arr));

	/*
		外循环控制循环多少轮，
		内层循环控制没轮比较多少次，
		因为每轮比较结束后，都会把最大的数移到最右边，
		所以，随着比较轮数的增加，每轮要比较的数是递减的(j<len-1-i)。
		
		注意：
			每次都要重头开始比较，j的值，必须在一轮比较开始前，重置为0，以从数组的最开始比较。
	
	*/

	for(i;i<len;i++){
		for(j=0;j<len-1-i;j++){ //每轮循环开始都要重置j=0
			
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}

	}

	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}

	printf("\n");
	return 0;
}