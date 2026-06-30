#include<stdio.h>
#include<stdlib.h>
#include"SeqList.h"


//initialization
void SLInit(SL* ps) {
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

//pushback
void SLPushBack(SL* ps, SLDataType x) {
	//is the space full
	if (ps->size == ps->capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		//resize
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity*sizeof(SLDataType));
		if (tmp == NULL) {
			perror("realloc failed");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}

	//when capacity is adequate
	ps->arr[ps->size++] = x;

}






