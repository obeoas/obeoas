#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main(){
//	//�������ĺ�
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
//	printf("���ú�ѧϰ��?����ѡ1������ѡ0)(1/0):>");
//	scanf("%d", &coding);
//	if (coding == 1)
//		printf("�㽫ӭ��������δ����");
//	else
//		printf("��שȥ�ɣ�");
//	return 0;
//}

//int main() {
//	int line = 0;
//	printf("�������\n");
//	while (line < 52000)
//	{
//		line++;
//		printf("�һ�����ô��룺%d\n",line);
//	}
//	if (line >= 52000)
//		printf("ӭȢ�׸���");
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

//����Ĵ��루δ֪����92,110��
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
//	int b = a++;//��ʹ�ã���++
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
//int main() {
//	int a = 10;
//	int b = ++a;//��++����ʹ��
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
//	*p = 20;//*Ϊ�����ò�����
//	printf("%d\n", a);
//	return 0;
//}

//struct Book {
//	char name[20];
//	short price;
//};
////int main() {
////	struct Book b1 = { "c���Գ������", 55};
////	printf("����:%s\n",b1.name);
////	printf("�۸�:%dԪ\n",b1.price);
////	b1.price = 35;
////	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
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
//	struct Book b1 = { "�ߵ���ѧ",55 };
//	struct Book* pb = &b1;
//	printf("������%s\n", (*pb).name);//*��.����������������ȼ���.�����ȼ��ܸߣ�����˳�������ȷ����*��.��
//	printf("������%s\n", pb->name);//Ҳ����������������
//	return 0;
//}

//int main() {
//	float a = 9.0, b = 5.0;
//	float g = a / b;
//	printf("��Ϊ:%.2f", g);//%.2f�Ǳ�����λС��
//	return 0;
//}

//int main() {
//	int age = 100;
//	if (age < 18)
//		printf("δ����");
//	else {
//		if (age >= 18 && age < 28)
//			printf("����");
//		else if (age >= 28 && age < 50)
//			printf("׳��");
//		else if (age >= 50 && age < 90)
//			printf("����");
//		else
//			printf("�ϲ���");
//	}//��else��ifҪִ�ж������Ҫ��{}������else����{}
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//	}
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF:end of file �ļ�������־
//		putchar(ch);
//
//	return 0;
//}
//
//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n');
//	printf("��ȷ������<Y/N>:");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("��ȷ��");
//	}
//	else
//	{
//		printf("��ȡ��");
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
//	printf("������һ��nֵ��");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret *= i;
//		sum += ret;
//	}
//	printf("1��10�Ľ׳˺�sum = %d",sum);
//	return 0;
//}

//#include<string.h>//����strlen�Ŀ⺯��
//#include<Windows.h>//����Sleep�Ŀ⺯��
//#include<stdlib.h>//����cls�Ŀ⺯��
//int main() {
//	char arr1[] = "welcome to 310 apartment";
//	char arr2[] = "                        ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	for (; left <= right;) {
//		arr2[left] = arr1[left];//��ֵ
//		arr2[right] = arr1[right];//��ֵ
//		/*system("cls");*///ִ��ϵͳ�����һ������--cls--�����Ļ
//		printf("%s\n", arr2);
//		Sleep(1000);//ͣ��1000����
//		left++;
//		right--;
//	}
//	return 0;
//}

//#include<string.h>//strcmp�⺯�����ݿ�
//int main() {
//	printf("======�û���¼======\n");
//	printf("ֻ�ܵ�¼3��\n");
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++) {
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)//�⺯��strcmp�涨������ҷ���������������ҷ���0����С���ҷ��ظ���
//		{
//			printf("������ȷ������ɹ�\n");
//			break;
//		}
//		else {
//			printf("�������\n");
//		}
//	}
//	if(i == 3)
//		printf("��������������˳�����");
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
//	printf("�������������֣�");
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
//	k = (x++, ++y, ++z);//�����źͲ�������kֵ��һ������ʱk=1����ȥ�����ţ�k=4
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
//	scanf("%*d%d", &x, &a); //����1 1ʱ���ȼ���scanf("%d", &x, &a);����ʱx=1��a=3
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
	//int t = ++x || ++y && ++z;//����||��&&���ж�·�ԣ�����||�������x=2Ϊ��ʱ���ұ߲���������㣬�������ʽ��ֵΪ�� t=1
	//printf("%d %d %d %d", x, y, z, t);
	//char* p = "123";//�ַ������������޸ģ���˲�����*p = '3';��������p������ֻ����ʼ����һ��
	char p[] = { '1','2','3','\0' };//��д���ַ�����ʱ������޸�
	//char* p = { '1','2','3','\0' };//����д�������Ϊ����д�൱�ڰ�����p�����������˹���ĳ�ʼֵ
	*p = '3';
	printf("%c\n", *p);
	printf("%d", *p);//'3'��ASCIIֵΪ51
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
   
	int x = sizeof((char)b / ++a);//����ǿ��ת�����ã�����b��ת��Ϊchar���ͣ���a����int���ͣ��ڽ��г�������ʱ��charֵ��������Ϊintֵ�������Ϊint����
	printf("%d\n", x);//xΪ4
	
	int z = sizeof((long float)a / b);
	printf("%d\n", z);
	return 0;
}

int main04() {
	char a[20];
	scanf("%s", a);
	printf("��λ��Ϊ%c\n", *a);
	printf("ʮλ��Ϊ%c\n", *(a + 1));
	printf("��λ��Ϊ%c\n", *(a + 2));
	return 0;
}

//��һ�������г��ִ�������Ԫ��
int main05() {
	int n; // ���ݹ�ģ
	scanf("%d", &n);

	int arr[100] = { 0 }; // ���ڴ洢ÿ��Ԫ�س��ֵĴ������±��ʾԪ�ص�ֵ
	int maxCount = 0; // �����ִ���
	int maxElement = 0; // ���ִ�������Ԫ��

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		arr[num]++; // ��ӦԪ�صļ�����1

		if (arr[num] > maxCount) {//�����һ��ֵʱ��if���ִ��һ�Σ�ͬһ��numֵÿ�ظ�һ�Σ�if���ִ��һ��
			maxCount = arr[num];//ÿ�θ�ֵ��maxCount��ֵ�������numֵ���ظ����������������
			maxElement = num;//���������ظ����������numֵʱ��maxElement��ֵ�ͱ�����һ��
		}
	}

	printf("���ִ�������Ԫ���ǣ�%d\n", maxElement);

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

