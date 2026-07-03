#include"SeqList.h"

void test01() {
	SL sl;
	SLInit(&sl);
	//SLPushBack(&sl, 1);
	//SLPushBack(&sl, 2);
	//SLPushBack(&sl, 3);
	//SLPushBack(&sl, 4);
	//SLPushBack(&sl, 5);
	//SLPushBack(&sl, 6);
	//SLPushFront(&sl, 1);
	//SLPushFront(&sl, 2);
	//SLPushFront(&sl, 3);
	//SLPushFront(&sl, 4);
	//SLPushFront(&sl, 5);
	//SLPopBack(&sl);
	//SLPopBack(&sl);
	//SLPopBack(&sl);
	//SLPopBack(&sl);
	//SLPopFront(&sl);
	//SLPopFront(&sl);
	//SLPopFront(&sl);
	//SLPopFront(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);
	SLInsert(&sl, 1, 100);
	SLPrint(&sl);

}

int main() {
	test01();
	return 0;
}