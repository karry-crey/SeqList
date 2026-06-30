#pragma once
#include<stdio.h>
#define N 7
//define the dynamic sequential list structure
typedef int SLDataType;
typedef struct SeqList {
	SLDataType* arr;
	int size;//number of  valid elements
	int capacity;//space capacity
}SL;

//static sequential list
//typedef struct SeqList {
//	SLDataType a[N];
//	int size;
//}SL;

void SLInit(SL* ps);

void SLPushBack(SL* ps, SLDataType x);
