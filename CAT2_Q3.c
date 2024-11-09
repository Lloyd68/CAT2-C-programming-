/*CAT2_Q3

author;Anyasi Liloyo Munala 

Reg;CT101/G /22812 /24*/

#include <stdio.h>



int main(){

//variables 

float hours;

float wage;

float GrossPay;

float NetPay ;

float taxes;



printf("Please enter # of hours worked in a week: ");

scanf("%f", &hours);



printf("Please enter hourly wage: ");

scanf("%f", &wage);



if (GrossPay <= 40){

    GrossPay= wage* hours;

}



else{

    GrossPay= wage * hours * 1.5;

}



NetPay= (600 * 0.15) + (GrossPay- 600)* 0.2; 

taxes = GrossPay - NetPay;

//output

printf("Your gross pay is $%.2f, \ntaxes:$%.2f \nand net pay : $%.2f", GrossPay, taxes, NetPay);



    return 0;

}