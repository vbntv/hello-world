#include <stdio.h>

int main() 
{
    int srok;
    float vklad;

    printf("Срок: ");        
    scanf("%d", &srok);
    printf("Сумма вклада: ");
    scanf("%f", &vklad);
    if((srok > 365) || (srok < 0) || (vklad < 10000)) { 
        perror("incorrect input");
        return 0;
    }
    if(vklad <= 100000) {
        if(srok <= 30) {
	     vklad = vklad * 0.9;           
        } else if((srok >= 31) && (srok <= 120)) {
             vklad = vklad * 1.02;           
        } else if((srok >= 121) && (srok <= 240)) {
             vklad = vklad * 1.06;           
        } else if((srok >= 241) && (srok <= 365)) {	
             vklad = vklad * 1.12;
        }   
     } else if(vklad > 100000) {
         if(srok <= 30) {
             vklad = vklad * 0.9;            
         } else if((srok >= 31) && (srok <= 120)) {
             vklad = vklad * 1.03;            
         } else if((srok >= 121) && (srok <= 240)) {
             vklad = vklad * 1.08;           
         } else if((srok >= 241 ) && (srok <= 365)) {	
             vklad = vklad * 1.15;
         }
            
    }
	
 printf("\nCуммa вклада на момент окончания срока: %g\n", vklad);
	
    return 0;
}
   
