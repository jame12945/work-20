#include<iostream>
int x = 0;

int result2;
int i, j,a,b,c=0,n;
int value1() {
	int result1 = 0;
	for (i = 1; i <= n; i++) {
		if (i == 1)
			for (j = 1; j <= n; j++) {

				x = x + 1;
				result2 = result1 + (x * x);//1
				//printf("%d\n", result2);//1
				result1 = result1 + (x * x);
			}
		//int result1 = 1;
		/*result1 = result1 + (x * x);
		printf("\n");*/
	}
	printf("the first answer is %d\n", result2);
	return result2;
}


	//..................................
int value2(){
	for (a = 1; a <= n; a++) {
		c = c + a;
	}
	printf("the second answer is %d\n", c * c);
	return c*c;

}
int main() {
	scanf_s("%d", &n);
	value1();
	value2();
	printf("the last answer is %d", (c * c) - result2);
}