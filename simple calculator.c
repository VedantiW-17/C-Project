#include <stdio.h>
#include<math.h>

double division(double, double);
int Modulus(int, int);
void print_menu();

int main(){
    int choice;
     double First ,Second,result;

    while(1){
        print_menu ();
        scanf("%d", & choice);
        if(choice==7){
            break;
        }
        if(choice<1 || choice>7){
            fprintf(stderr,"Invalid menu choice.");
            continue;
        }

        printf("Please Enter the first Number :");
        scanf("%lf",&First);
        printf("Now , Enter the Second Number : ");
        scanf("%lf",&Second);

        switch(choice)
        {
            case 1:  // Add
            result = First + Second;
                break;
            case 2: // subtract
             result = First - Second;
                break;
            case 3: // Multiply
             result = First * Second;
                break;
            case 4:  // divide
             result = division(First,Second);
                break;
            case 5:  // Modulus
             result = Modulus( First ,Second);
                break;
            case 6:  //Power
             result = pow(First,Second);
                break;
            
            
        }
if(!isnan(result)){
        printf("\nResult of Operation is: %2f",result); 
}
    };
    return 0;
}

double division(double a,double b){
   if(b==0){
    fprintf(stderr,"Invalid argument for division");
    return NAN;
}
 else{
    return a/b;
   }
}

int Modulus(int a,int b){
   if(b==0){
    fprintf(stderr,"Invalid argument for Modulus");
    return NAN;
   } 
   else{
    return a % b;
   }
}

void print_menu() {
    printf("\n\n----------------------------------------------------------------------------------------");
    printf("\n Welcome to Simple calculator");
    printf("\n Choose one of the following option:");
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication");
    printf("\n 4.Division");
    printf("\n 5.Modulus ");
    printf("\n 6.Power");
    printf("\n 7.Exit");
    printf("\nNow Enter your Choice:");
    }
