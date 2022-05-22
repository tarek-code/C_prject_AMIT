#ifndef SIMPLEDB_H_
#define SIMPLEDB_H_
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
#define MAXSIZE 10
#define MAX 10
extern int full;
extern char current;
extern choosing;
extern decide;
extern numberStudent;
extern id;
typedef unsigned int uint8;


typedef struct SimpleDb{

int Student_ID;
int Student_Year;
int Course_1_ID;
int Course_1_Grade;
int Course_2_ID;
int Course_2_Grade;
int Course_3_ID;
int Course_3_Grade;


}SimpleDb_1;
bool SDB_IsFull(void);
uint8 SDB_GetUsedSize(void);
void SDB_AddEntry(SimpleDb_1 *s,int number);
void SDB_DeleteEntry(SimpleDb_1 *s,char id);
void SDB_GetIdList(SimpleDb_1* s);
void SDB_ReadEntry(SimpleDb_1* s,int id);
bool SDB_IsIdExist(SimpleDb_1* s,int id);


#endif // SIMPLEDB_H_
