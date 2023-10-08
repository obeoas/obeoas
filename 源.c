#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "源.h"

//int main(){
//	求两数的和
//	int ch1, ch2, sum;
//	printf("Please enter first integer:");
//	scanf("%d", &ch1);
//	printf("Please enter second integer:");
//	scanf("%d", &ch2);
//	sum = ch1 + ch2;
//	printf("Sum is %d.\n", sum); 
//	return 0;
//}

//int main(){
//	int ch1 = 35;
//	int ch2 = 39;
//	int sum;
//	sum = ch1 + ch2;
//	printf("35+39 = %d\n", sum);
//    return 0;
//   }

//int global = 2023;
//void test() {
	//printf("test--%d\n",global);
//}
//int main() {
	//test();
	//printf("%d\n", global);
	//return 0;
//}

//
//enum color {
//	red,
//	yellow,
//	blue
//};
//int main()
//{
//	enum color c = blue, a = red, b = yellow;
//	printf("%d\n%d\n%d", a, b, c);
//	return 0;
//}
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n%d\n", strlen(arr1), strlen(arr2));
//
//	return 0;
//} 

//int main()
//{
//	int coding = 0;
//	printf("你会好好学习吗?（会选1，不会选0)(1/0):>");
//	scanf("%d", &coding);
//	if (coding == 1)
//		printf("你将迎来光明的未来！");
//	else
//		printf("搬砖去吧！");
//	return 0;
//}

//int main() {
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 52000)
//	{
//		line++;
//		printf("我会继续敲代码：%d\n",line);
//	}
//	if (line >= 52000)
//		printf("迎娶白富美");
//	return 0;
//}

//int main()
//{
//	int arr[8] = { 1,2,3,4,5,6,7,8 };
//	//int i = 0;
//	//while (i < 8) {
//		//printf("%d\n", arr[i]);
//		//i++;
//	//}
//	printf("%d\n", arr[4]);
//	return 0;
//}

//错误的代码（未知）（92,110）
//int Min(int x, int y) {
//	if (x < y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int arr1[] = { 1,5,6,8,12,24,36};
//	int arr2[] = { 2,4,6,7,9,10,27 };
//	int min = 0;
//	int i = 0,j = 0;
//	printf("Please input first numble(0,6):>");
//	scanf("%d\n", i);
//	printf("Please input second numble(0,6):>");
//	scanf("%d\n", j);
//	min = Min(arr1[i], arr2[j]);
//	printf("%d\n", min);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = a++;//先使用，后++
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
//int main() {
//	int a = 10;
//	int b = ++a;//先++，后使用
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

//int main() {
//	int a = 10;
//	&a;
//	printf("%p\n", a);
//	return 0;
//}

//int main(){
//	int a = 10;
//	int* p = &a;
//	*p = 20;//*为解引用操作符
//	printf("%d\n", a);
//	return 0;
//}

//struct Book {
//	char name[20];
//	short price;
//};
////int main() {
////	struct Book b1 = { "c语言程序设计", 55};
////	printf("书名:%s\n",b1.name);
////	printf("价格:%d元\n",b1.price);
////	b1.price = 35;
////	printf("修改后的价格：%d元\n", b1.price);
////	return 0;
////}
//
//int main() {
//	struct Book b1 = { "高等数学",55 };
//	struct Book* pb = &b1;
//	printf("书名：%s\n", (*pb).name);//*和.都是运算符，有优先级，.的优先级很高，考虑顺序加括号确保先*再.。
//	printf("书名：%s\n", pb->name);//也可以这样，更方便
//	return 0;
//}


int main() {
	int a = 9, b = 5;
	double g = a / b;
	printf("商为:%f", g);
	return 0;
}