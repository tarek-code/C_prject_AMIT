# C_prject_AMIT
Database using C _programing


Create a database module "SimpleDb" that holds the following parameters:
 Student ID
 Student Year
 Course_1 ID
 Course_1 Grade
 Course_2 ID
 Course_2 Grade
 Course_3 ID
 Course_3 Grade
Note: The maximum size of the database is 10 entries
The following Interfaces should be provided by the developed module:
 bool SDB_IsFull(void)
o Description: Check if the database is full
o Return Value: Return 1 if the the database is full, otherwise 0
 uint8 SDB_GetUsedSize(void)
o Description: Get the number of entries in the database
o Return: Return the number of entries
 bool SDB_AddEntry(uint8 id, uint8 year, uint8* subjects, uint8* grades)
o Description: Add new entry to the database
o Return: Return 1 if the new entry is successfully added; otherwise 0
o Input Parameter - id: Student ID
o Input Paramater - year: Student Year
o Input Parameter - subjects: Pointer to 3 subject IDs, with each subject id is a uint8 value
o Input Parameter - grades: Pointer to 3 grades, with each grade is a uint8 value
o The allowed range for the grade is only from 0 to 100
o Assume that the caller will always provide the 3 subjects with their grades
 void SDB_DeleteEntry(uint8 id)
o Description: Delete the entry with the given ID
o Input Parameter - id: ID of the entry to be deleted
 bool SDB_ReadEntry(uint8 id, uint8* year, uint8* subjects, uint8* grades)
o Description: Read an entry matching the provided ID
o Return Value: Return 1 if the entry exist, otherwise 0
o Input Parameter - id: Student ID
o Output Parameter - year: Pointer to the student year
o Output Parameter - subjects: Pointer to the subjects
o Output Parameter - grades: Pointer to the grades
 void SDB_GetIdList(uint8* count, uint8* list)
o Description: Get the list of IDs of the students
o Output Parameter - count: Pointer to the number of entries currently exists in the 
database
o Output Parameter - list: Pointer to the list of IDs
 bool SDB_IsIdExist(uint8 ID)
o Description: Checks if the the provided student ID exists
o Return Value: Return 1 if ID exists in the database, otherwise 
