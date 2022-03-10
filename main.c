#include <stdio.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */

int main() {
    int university_student;
    float purchase,discount_deduction,tax = 0.05;


    for (int j = 0; j < 1 ; ++j) {
        printf("Enter the total purchase amount : ");
        scanf("%f", &purchase);
        printf("If you are a student, enter the number 1 and otherwise the number 0 : ");
        scanf("%d", &university_student);


        if (university_student ==1) /*Students*/
        {
            printf("Total purchases : $ %.2f. \n",purchase);
            printf("Student's discount (20%%) : %.2f. \n",purchase*0.8);
            printf("Discounted total :  %.2f. \n",purchase-(purchase*0.8));
            printf("Sales tax (5%%) :  %.2f. \n",(purchase-(purchase*0.8))*tax);
            printf("Total : $ %.2f. \n ",(purchase-(purchase*0.8))+((purchase-(purchase*0.8))*tax));
        }
        else if (university_student ==0) /*Not Students*/
        {
            printf("Total purchases : $ %.2f. \n",purchase);
            printf("Sales tax (5%%) :  %.2f . \n",purchase*tax);
            printf("Total : $ %.2f . \n ",purchase+(purchase*tax));
        }
        else /*Error Control */
        {
            printf("Error Input Num! \n ");
            university_student = university_student -university_student;
            --j;
        }
    }
    }


