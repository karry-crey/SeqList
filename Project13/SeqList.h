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
void SLDestroy(SL* ps);
void SLPrint(SL* ps);
void SLCheckCapacity(SL* ps);

void SLPushBack(SL* ps, SLDataType x);

void SLPushFront(SL* ps, SLDataType x);

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);

int SLFind(SL* ps,SLDataType x);