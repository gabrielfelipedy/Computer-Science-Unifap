#include <stdio.h>

void printa(int * array) {
	for(int i = 0; i < 10; i++)
		printf("%d ", *array++);
}

int main() {

//example code
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//    int *arr;
//    int n;
//    int sum = 0;
//    scanf("%d", &n);
//    arr = (int*) malloc(n*sizeof(int));
//    for(int i = 0; i < n; i++){
//        scanf("%d", (arr+i));
//    }
//    for(int i = 0; i < n; i++){
//       sum += arr[i];
//    }
//    printf("%d", sum);
//}

	int array[10] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 2};
	printa(array);
}
