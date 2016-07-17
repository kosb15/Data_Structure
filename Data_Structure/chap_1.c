#include <stdio.h>

// ÀÌÁø Å½»ö
int BSearch(int ar[],int len, int target)
{
	int first = 0;
	int last = len -1;
	int mid;
	int opcount =0;

	while(first <= last)
	{
		mid = (first + last) / 2;
		opcount++;
		if(ar[mid] == target){
			return mid;
		}else if(ar[mid] > target){
			last = mid-1;	
			continue;
		}else{
			first = mid+1;
			continue;
		}
	}
	printf("¿¬»ê È½¼ö : %d \n",opcount);
	return -1;
}

void main(){
	int arr[500] = {0,};
	int arr1[5000] = {0,};
	int arr2[50000] = {0,};
	int idx;

	idx = BSearch(arr, sizeof(arr)/sizeof(int), 1 );
	if(idx == -1){
		printf("Å½»ö ½ÇÆĞ\n");
	}else{
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º %d \n",idx);
	}

	idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 2 );
	if(idx == -1){
		printf("Å½»ö ½ÇÆĞ\n");
	}else{
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º %d \n",idx);
	}

	idx = BSearch(arr2, sizeof(arr2)/sizeof(int), 3 );
	if(idx == -1){
		printf("Å½»ö ½ÇÆĞ\n");
	}else{
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º %d \n",idx);
	}
}