#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main(){
//	//求两数的和
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
//
//int main()
//{
//	int arr[8] = { 1,2,3,4,5,6,7,8 };
//	int i = 0;
//	while (i < 8) {
//		printf("%d\n", arr[i]);
//		i++;
//	}
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
//int main() {
//	struct Book b1 = { "高等数学",55 };
//	struct Book* pb = &b1;
//	printf("书名：%s\n", (*pb).name);//*和.都是运算符，有优先级，.的优先级很高，考虑顺序加括号确保先*再.。
//	printf("书名：%s\n", pb->name);//也可以这样，更方便
//	return 0;
//}

//int main() {
//	float a = 9.0, b = 5.0;
//	float g = a / b;
//	printf("商为:%.2f", g);//%.2f是保留两位小数
//	return 0;
//}

//int main() {
//	int age = 100;
//	if (age < 18)
//		printf("未成年");
//	else {
//		if (age >= 18 && age < 28)
//			printf("青年");
//		else if (age >= 28 && age < 50)
//			printf("壮年");
//		else if (age >= 50 && age < 90)
//			printf("老年");
//		else
//			printf("老不死");
//	}//当else或if要执行多条语句要加{}，这里else用了{}
//	return 0;
//}

//int main() {
//	int num = 1;
//	
//	while (num <= 100) {
//		if (num % 2 == 1)
//			printf("%d ",num);
//		num++;
//	}
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//	}
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF:end of file 文件结束标志
//		putchar(ch);
//
//	return 0;
//}
//
//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n');
//	printf("请确认密码<Y/N>:");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("已确认");
//	}
//	else
//	{
//		printf("已取消");
//	}
//	return 0;
//}

//int main() {
//	double ret = 1;
//	double n, i;
//	printf("n = ");
//	scanf("%lf", &n);
//	for (i = 1; i <= n;i++)
//	{
//		ret *= i;
//	}
//	printf("n! = %.0f\n", ret);
//	return 0;
//}
//

//#include<stdio.h>
//int Add(int a, int b)
//{
//
//	return  a + b;
//}
//int main()
//{
//	int x = 0, y = 0, sum = 0;
//	printf("Input First Integer:");
//	scanf("%d", &x);
//	printf("Input second Integer:");
//	scanf("%d", &y);
//	sum = Add(x, y);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main() {
//	int sum =0, ret = 1;
//	int i = 1, n = 0;
//	printf("请输入一个n值：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret *= i;
//		sum += ret;
//	}
//	printf("1到10的阶乘和sum = %d",sum);
//	return 0;
//}

//#include<string.h>//调用strlen的库函数
//#include<Windows.h>//调用Sleep的库函数
//#include<stdlib.h>//调用cls的库函数
//int main() {
//	char arr1[] = "welcome to 310 apartment";
//	char arr2[] = "                        ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	for (; left <= right;) {
//		arr2[left] = arr1[left];//赋值
//		arr2[right] = arr1[right];//赋值
//		/*system("cls");*///执行系统命令的一个函数--cls--清空屏幕
//		printf("%s\n", arr2);
//		Sleep(1000);//停顿1000毫秒
//		left++;
//		right--;
//	}
//	return 0;
//}

//#include<string.h>//strcmp库函数数据库
//int main() {
//	printf("======用户登录======\n");
//	printf("只能登录3次\n");
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)//库函数strcmp规定左大于右返回正数，左等于右返回0，左小于右返回负数
//		{
//			printf("密码正确，登入成功\n");
//			break;
//		}
//		else {
//			printf("密码错误\n");
//		}
//	}
//	if(i == 3)
//		printf("三次密码均错误，退出程序");
//	return 0;
//}

//
//int Max(int x,int y,int z)
//{
//	if (x > y && x > z)
//		return x;
//	else if (y > x && y > z)
//		return y;
//	else
//		return z;
//}
//int main(){
//	int x, y, z = 0;
//	int max = 0;
//	printf("请输入三个数字：");
//	scanf("%d,%d,%d",&x,&y,&z);
//	max = Max(x, y, z);
//	printf("Max = %d", max);
//	return 0;
//	}

//int main() {
//	int a, b;
//	printf("Input :");
//	scanf("%d", &a);
//	printf("a=%d\n",a);
//	printf("Input b: ");
//	scanf("%d", &b);
//	printf("b=%d\n", b);
//	return 0;
//  }
//
//#include"fun.h"
//int main() {
//	int x = 3;
//	for (int i = 0; i < 10; i++) {
//		x++; 
//		x = charge(i,x);
//	}
//	printf("%d", x);
//}

//int main() {
//	int x = 4, y = 0, z = 0, k;
//	k = (x++, ++y, ++z);//加括号和不加括号k值不一样，此时k=1，若去掉括号，k=4
//	printf("%d", k);
//	return 0;
//}

//
//int x = 2;
//void fun(int p) {
//	int x = 4, y = 0, z = 0, k;
//	k = x++, y++, ++z;
//	x += (y++,++y, k + y++ + p);
//	printf("%d\n", x);
//	printf("%d\n", y);
//}
//int main() {
//	int a = 3;
//	scanf("%*d%d", &x, &a); //输入1 1时，等价于scanf("%d", &x, &a);，此时x=1，a=3
//	printf("%d\n", x);
//	fun(a);
//	x += a++;
//	printf("%d\n", x);
//	return 0;
//}

//int main()
//{
//	int scale;
//	int a[100];
//	printf("input the data scale:\n");
//	scanf("%d", &scale);
//	for (int i = 0; i < scale; i++) {
//		printf("input the datas:\n");
//		scanf("%d", &a[i]);
//	}
//
//	return 0;
//}

int main01() {
	//int x = 1, y = 1, z = 1;
	//int t = ++x || ++y && ++z;//由于||和&&具有短路性，当“||”的左边x=2为真时，右边不会进行运算，整个表达式的值为真 t=1
	//printf("%d %d %d %d", x, y, z, t);
	//char* p = "123";//字符串常量不能修改，因此不能用*p = '3';，且数组p的首项只被初始化了一次
	char p[] = { '1','2','3','\0' };//当写成字符数组时则可以修改
	//char* p = { '1','2','3','\0' };//这样写则错误，因为这样写相当于把数组p的首项设置了过多的初始值
	*p = '3';
	printf("%c\n", *p);
	printf("%d", *p);//'3'的ASCII值为51
	return 0;
}

int main02() {
	int a = 1, b = 2;
	int c, d;
	c = a + b--;
	d = a + -b;
	printf("%d %d %d", c, b, d);
	return 0;
}

#include<string.h>
int main03() {
	int a = 1, b = 2;
	char c[2] = { 0 }, * p = c;
	int y;
	*++p = '\0';
	y = strlen(--p) + ++a;//0 + 2 = 2
	printf("%d\n", y);
   
	int x = sizeof((char)b / ++a);//这里强制转换无用，由于b被转换为char类型，但a还是int类型，在进行除法运算时，char值类型提升为int值，最后结果为int类型
	printf("%d\n", x);//x为4
	
	int z = sizeof((long float)a / b);
	printf("%d\n", z);
	return 0;
}

int main04() {
	char a[20];
	scanf("%s", a);
	printf("百位数为%c\n", *a);
	printf("十位数为%c\n", *(a + 1));
	printf("个位数为%c\n", *(a + 2));
	return 0;
}

//求一个数组中出现次数最多的元素
int main05() {
	int n; // 数据规模
	scanf("%d", &n);

	int arr[100] = { 0 }; // 用于存储每个元素出现的次数，下标表示元素的值
	int maxCount = 0; // 最大出现次数
	int maxElement = 0; // 出现次数最多的元素

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		arr[num]++; // 对应元素的计数加1

		if (arr[num] > maxCount) {//输入第一个值时，if语句执行一次，同一个num值每重复一次，if语句执行一次
			maxCount = arr[num];//每次赋值，maxCount的值会随这个num值的重复次数的增大而增大
			maxElement = num;//当发现有重复次数更多的num值时，maxElement的值就被更新一次
		}
	}

	printf("出现次数最多的元素是：%d\n", maxElement);

	return 0;
}

#include <stdlib.h>
int main06() {
	int* a = (int*)malloc(sizeof(int) * 100);

	for (int i = 12; i < 20; i++) {
		a[i - 12] = i;
	}

	printf("%d", (*a)++ * *(++a));
	a = NULL;
	free(a);
	return 0;
}

void exchange(int*, int);
int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	for (int k = 0; k < n; k++) {
		scanf("%d", &a[k]);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i;j++) {
			exchange(a, j);
		}
	}
	for (int t = 0; t < n; t++) {
		printf("%d ", a[t]);
	}
	return 0;
}
void exchange(int* p,int m) {
	int step;
	if (*(p + m) < *(p + m - 1)) {
		step = *(p + m);
		*(p + m) = *(p + m - 1);
		*(p + m - 1) = step;
	}
}

