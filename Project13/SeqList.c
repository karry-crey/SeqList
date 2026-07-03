#include<stdio.h>
#include<stdlib.h>
#include"SeqList.h"
#include<assert.h>

//initialization
void SLInit(SL* ps) {
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
void SLPrint(SL* ps) {
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps) {
	//is the space full
	if (ps->size == ps->capacity) {
		//resize
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			perror("realloc failed");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}

//pushback
void SLPushBack(SL* ps, SLDataType x) {
	//if (ps == NULL) {
	//	return;
	//}
	assert(ps != NULL);
	SLCheckCapacity(ps);
	//when capacity is adequate
	ps->arr[ps->size++] = x;
}



//push front
void SLPushFront(SL* ps, SLDataType x) {
	//if (ps == NULL) {
	//	return;
	//}
	assert(ps != NULL);
	SLCheckCapacity(ps);
	//when capacity is adequate
	int j = ps->size;
	while (j > 0) {
		ps->arr[j] = ps->arr[j - 1];
		j--;
	}
	ps->arr[0] = x;
	ps->size++;
}

//pop back
void SLPopBack(SL* ps){
	assert(ps && ps->size);
	ps->size--;
}
//pop front
void SLPopFront(SL* ps) {
	assert(ps && ps->size);
	for (int i = 0; i < ps->size - 1; i++) {
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//insert a new element before the position specific by the index,
//shifting subsequent elements to the right
void SLInsert(SL* ps, int pos, SLDataType x) {
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	for (int i = ps->size; i > pos; i--) {
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}

//remove the specific element by the index
void SLErase(SL* ps, int pos) {
	assert(ps && ps->size);
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size-1; i++) {
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//search
int SLFind(SL* ps, SLDataType x) {
	for (int i = 0; i < ps->size; i++) {
		if (ps->arr[i] == x) {
			return i;
		}
	}
	return -1;
}

void SLDestroy(SL* ps) {
	if (ps->arr)
		free(ps->arr);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}




