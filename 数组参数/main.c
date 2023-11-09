#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test1(int arr[]) {
	//这种传递没问题
	return;
}

void test2(int arr[10]) {
	//也没问题，但是要吻合，且写上也没啥用，不过利于理解和避免错误
	return;
}

void test3(int* arr) {
	//传递的是首元素的地址，和上面两种也是等价的
	//要写指针要用一个合理的指针类型
	return;
}

void test4(int* arr[20]) {
	//传递的是一个指针数组，由指针构成的数组,20可以省略
	return;
}

void test5(int** arr) {
	//二级指针，直接指向了指针数组中元素所指的int
	return;
}

void test2d1(int arr[3][5]) {
	//最中规中矩的传递方式
	return;
}

void test2d2(int arr[][5]) {
	//二维数组的行可以省略，因为实际上元素就是数组
	return;
}

void test2d3(int(*arr)[5]) {
	//指向二维数组的第一个元素——第一行这个数组
	return;
}

void test2d4(int** arr) {
	//错误
	return;
}



int main(void) {
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };//警告：野指针
	test1(arr);
	test4(arr2);

	//二维数组传参
	int arr2d[5][10];
	test2d1(arr2d);
	test2d2(arr2d);
	test2d3(arr2d);

	return 0;
}