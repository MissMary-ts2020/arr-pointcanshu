#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test1(int arr[]) {
	//���ִ���û����
	return;
}

void test2(int arr[10]) {
	//Ҳû���⣬����Ҫ�Ǻϣ���д��Ҳûɶ�ã������������ͱ������
	return;
}

void test3(int* arr) {
	//���ݵ�����Ԫ�صĵ�ַ������������Ҳ�ǵȼ۵�
	//Ҫдָ��Ҫ��һ�������ָ������
	return;
}

void test4(int* arr[20]) {
	//���ݵ���һ��ָ�����飬��ָ�빹�ɵ�����,20����ʡ��
	return;
}

void test5(int** arr) {
	//����ָ�룬ֱ��ָ����ָ��������Ԫ����ָ��int
	return;
}

void test2d1(int arr[3][5]) {
	//���й��оصĴ��ݷ�ʽ
	return;
}

void test2d2(int arr[][5]) {
	//��ά������п���ʡ�ԣ���Ϊʵ����Ԫ�ؾ�������
	return;
}

void test2d3(int(*arr)[5]) {
	//ָ���ά����ĵ�һ��Ԫ�ء�����һ���������
	return;
}

void test2d4(int** arr) {
	//����
	return;
}



int main(void) {
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };//���棺Ұָ��
	test1(arr);
	test4(arr2);

	//��ά���鴫��
	int arr2d[5][10];
	test2d1(arr2d);
	test2d2(arr2d);
	test2d3(arr2d);

	return 0;
}