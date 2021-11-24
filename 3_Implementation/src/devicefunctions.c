#include <stdio.h>
#include"user.h"

#include"devicefunctions.h"



int Deviceindex(){
    
           printf("---------------------");
           
           printf("WELCOME TO SMART-HOME");
          
           printf("---------------------");
          
           printf("*******************************************************\n");
           
           printf("1.DOOR\n");
           
           printf("2.LIGHT\n");

           printf("3.FAN\n");
        
           printf("4.TV\n");
           
           printf("5.AC\n");
           
           
           

           printf("********************************************************");
           int Devicechoice;
          
           printf("CHOOSE THE DEVICE");
          
           scanf("%d",&Devicechoice);
           functions(Devicechoice);
           return 0;

}


void door(){
    
    printf("--------------------------------------\n");
   
    printf("DOOR OPEN\n");
    
    printf("--------------------------------------\n");
   
    

    
    
    
    


    
    printf("***********************************************************************************************************");


}






void light(){
    
    printf("--------------------------------------\n");
    
    printf("LIGHT ON");
   
    printf("--------------------------------------\n\n");
   
    
   
    
}


void  fan(){
    
    printf("--------------------------------------------------------");

    printf("FAN ON");
    
    printf("--------------------------------------------------------");
    
    printf("****************************************************************************************************************");

    
    
}

void tv(){
    
    printf("--------------------------------------");
   
    printf("TV ON");
    
    printf("--------------------------------------");
   
    printf("****************************************************************************************************************");

  
    
}


void ac(){

    
    printf("--------------------------------------");
    
    printf("AC ON");
    
    printf("--------------------------------------");
    
    printf("****************************************************************************************************************");

    
    
}

int functions(int Devicechoice ){


    switch(Devicechoice)
    {
    case 1:
        door();
        break;
    case 2:
        light();
        break;
    case 3:
        fan();
        break;
    case 4:
        tv();
        break;
    case 5:
        ac();
        break;
    
    default :
        printf("Please enter a valid Number");



    }
    return 0;
    
}