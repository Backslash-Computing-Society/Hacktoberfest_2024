#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;

};

   


int main(){
    struct student ece[100];
    ece[0].roll = 135;
    ece[0].cgpa = 9.8;
    strcpy(ece[0].name,"ARYAN");

    printf("NAME %s\n",ece[0].name);
    printf("ROLL NO. %d\n",ece[0].roll);
    printf("CGPA %f\n \n \n ",ece[0].cgpa);
    struct student coe[100];
    coe[0].roll = 145;
    coe[0].cgpa = 9.6;
    strcpy(coe[0].name, "RAJAT");
    printf("NAME %s\n",coe[0].name);
    printf("ROLL NO %d\n",coe[0].roll);
    printf("cgpa %f\n",coe[0].cgpa);








}