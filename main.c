#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int binary_search(int *ary, int key);
int main(void){
	int ary[]={1, 3, 4, 7, 9, 12, 16, 17, 20, 23};
	int key;
	printf("탐색 값을 입력하시오.\n");
	scanf("%d", &key);
	printf("탐색 %d회에 성공!\n", binary_search(ary, key));
}

int binary_search(int *ary, int key){
//아래에 코드를 작성하시오.	
}
