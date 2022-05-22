#include"SimpleDb.h"

int main()

{
SimpleDb_1 students[MAX]={0};


while(1){

printf("You want to use AMIT database !\n\n");
printf("1 for yes  \n");
printf("anything else for no :(\n");
scanf("%d",&decide);
if(decide==1){



        printf("\n\n\n_______________________Welcome to database of AMIT_______________________ \n\n\n");

printf("1 ADD Student \n");
printf("2 How many students in database \n");
printf("3 Get list of id to each student \n");
printf("4 Get information about any student \n");
printf("5 If any student is exist or not \n");
printf("6 Delete any student \n\n\n\n");
scanf("%d",&choosing);
switch(choosing){
case 1:
    if(full<MAX){

            printf("How many student you want to add  \n");
            scanf("%d",&numberStudent);
            SDB_AddEntry(students,full+numberStudent);
    }
    else{
        printf("The database is full plz remove some...\n\n");
    }
    break;



case 2:
    if(full<MAX){
        printf("There is %d students in AMIT database \n\n",SDB_GetUsedSize());
    }
    else{
        printf("The database is empty \n");
    }
    break;




case 3:
    if(full<MAX){
        SDB_GetIdList(students);
    }
    else{
        printf("The database is empty \n");
    }
    break;




case 4:
    if(full<MAX){
            printf("enter the ID \n");
    scanf("%d",&id);
       SDB_ReadEntry(students,id);
    }
    else{
        printf("The database is empty \n");
    }
    break;




case 5:
    if(full<MAX){

    printf("Enter the ID to know if this student is exist \n");
    scanf("%d",&id);
    if(SDB_IsIdExist(students,id)==1){
        printf("Yes %d is exist \n",id);
    }
    else{
        printf("%d is not exist in AMIT database");
    }
    }
    else{
        printf("The database is empty \n");
    }
    break;




case 6:
    if(full<MAX){
        printf("Enter the id to delete this student \n");
        scanf("%d",&id);
        SDB_DeleteEntry(students,id);
    }
    else{
        printf("The database is empty \n");
    }
    break;


default:
    printf("Wrong number  \n");
    break;

}

}
else{
        printf("\n\n\n Thx for using AMIT services  \n\n");
    break;
}
}
    return 0;
}

