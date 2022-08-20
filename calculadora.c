#include <stdio.h> 



int main(){
    
    int num ;
    int num2; 
    double num3;
    double num4;
    int alternativa;
    char unit;
    float temp;

    printf("\n************ CALCULADORA V1 *****************\nCriador: Thor_kryp >_> ");
    printf("\n-----------------------------\n  Escolha uma Alternativa\n----------------------------- \n 1- Somar  \n 2- Dividir \n 3- Multiplicar  \n 4- Tempo (F) AND (C) \n Qual Alternativa? ");
    scanf("%d",&alternativa); 

    if(alternativa == 1){
         
         printf("\n==========================\n Escola uma Alternativa \n==========================\n1- Somar number Pequenos \n2- Somar number Grandes (EX: PI)\nQual Alternativa? "); 
         scanf("%d",&alternativa); 

         if(alternativa == 1){

             printf("\nInforme o primeiro valor: "); 
             scanf("%d",&num);
             printf("\nInforme o segundo valor: ");
             scanf("%d",&num2); 

             printf("\nResultado: %d \n", num + num2);
             

         } 

         else if(alternativa == 2){

             printf("\nInforme o primeiro valor: "); 
             scanf("%lf",&num3);
             printf("\nInforme o segundo valor: ");
             scanf("%lf",&num4); 

             printf("\nResultado: %lf \n", num + num2);

         } 

         else{

             printf("\nAlternativa '%d' Inexistente! \n",alternativa);
         }

    }

    else if (alternativa == 2){
         printf("\n==========================\n Escola uma Alternativa \n==========================\n1- Divir number Pequenos\n2- Dividir number Grandes\nQual Alternativa? "); 
         scanf("%d",&alternativa); 

         if(alternativa == 1){
                printf("\nInforme o primeiro Valor: ") ;
                scanf("%d",&num);
                printf("\nInforme o secundo Valor: "); 
                scanf("%d",&num2);
                printf("\nResultado: %d\n", num / num2); 
         }
          else if(alternativa == 2){

             printf("\nInforme o primeiro valor: "); 
             scanf("%lf",&num3);
             printf("\nInforme o segundo valor: ");
             scanf("%lf",&num4); 

             printf("\nResultado: %lf \n", num / num2);

         } 

      


    }

    else if (alternativa == 3){
        printf("\n==========================\n Escola uma Alternativa \n==========================\n1- Multiplicar normal \n2- Ver tabuada completa\nQual Alternativa? "); 
        scanf("%d",&alternativa);
        
        if(alternativa == 1){
               
               printf("\nInforme um valor: ");
               scanf("%d",num);
               printf("\nInforme o segundo valor: ");
               scanf("%d",num2);

               printf("\nResultado: %d \n", num * num2);

        }

        else if(alternativa == 2){

               printf("\nInforme um number para tabuada: ");
               scanf("%d",&num); 
               num2 = num;
               printf("Resultado: \n %d X 1 : %d \n %d X 2 : %d \n %d X 3 : %d \n %d X 4 : %d \n %d X 5 : %d \n %d X 6 : %d \n %d X 7 : %d \n %d X 8 : %d \n %d X 9 : %d \n %d X 10 : %d\n",num2, num*1, num2,num*2,num2, num*3, num2,num*4,num2, num*5, num2,num*6,num2, num*7, num2,num*8,num2,num*9,num2,num*10);

        }

        else{

           printf("\nAlternativa '%d' inexistente!! ",alternativa);
        }
 
    }

    else if(alternativa == 4){
          
          printf("\n==========================\n Escola uma Alternativa \n==========================\n1- Tempo em Celsius \n2- Tempo em Farenheit\nQual Alternativa?  ");
          scanf("%d", &alternativa); 

          

          if(unit == '1'){
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &temp);
            temp = (temp * 9 / 5) + 32;
            printf("\nA temperatura em Farenheit is: %.1f", temp);
          } 
            else if(unit == '2'){
            printf("\nDigite a temperatura em Farenheit: ");
            scanf("%f", &temp);
            temp = ((temp - 32) * 5) / 9;
            printf("\nA temperatura em  Celsius is: %.1f", temp);
            } 
                
          else{
            printf("\nAlternativa '%d' inexistente!! ",alternativa);

           }
    }
           
    
   
    

    else{

    printf("\nAlternativa '%d' inexistente!! ",alternativa);

    }

    return 0;
}