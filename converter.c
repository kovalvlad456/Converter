#include <stdio.h>

void main()
{
    int value = 0; // which conversion user does
    float result; // final result of conversion
    printf("Please enter a number according to the following instructions\n"); // output statement

    do{ // do at least once
    // print options
        printf("1 for conversion between Kilograms and Pounds (1 kilogram == 2.20462 pounds)\n");
        printf("2 for conversion between Hectares and Acres (1 hectare == 2.47105 acres)\n");
        printf("3 for conversion between Litres and Gallons (1 litre == 0.264172 gallons)\n");
        printf("4 for conversion between Kilometre and Mile (1 kilometre == 0.621371 miles)\n");
        printf("5 for quit\n");
        scanf("%d", &value);
        result = 0.0; // set result to 0.0

        if(value == 1){ // if value is option one
            char kp; // creating a char type 
            float conversionOne = 0.0;
            printf("k for conversion from Kilograms to Pounds\np for conversion from Pounds to Kilograms\n");
            scanf(" %c", &kp); // store which conversion they want
            if(kp == 'k' || kp == 'K'){ // if true do the according calculations
                printf("Please enter your value in kilograms: ");
                scanf("%f", &conversionOne); // entering the number the user wants converted
                result = conversionOne * 2.20462;
                printf("Your conversion is: %0.4f pounds.\n",result);
            }else if(kp == 'p' || kp == 'P'){
                printf("Please enter your value in pounds: ");
                scanf(" %f", &conversionOne);
                result = conversionOne / 2.20462;
                printf("Your conversion is: %0.4f kilograms.\n",result);
            }else{ // if char does not match resets the loop
                printf("invalid imput");
            }
            //same idea for the other options just different calculation
        }else if(value ==2){ 
            char ha;
            float conversionTwo = 0.0;
            printf("h for conversion from Hectares to Acres\na for conversion from Acres to Hectares\n");
            scanf(" %c", &ha);
            if(ha == 'h' || ha == 'H'){
                printf("Please enter your value in Hectares: ");
                scanf(" %f", &conversionTwo);
                result = conversionTwo * 2.47105;
                printf("Your conversion is: %0.4f Acres.\n",result);
            }else if(ha == 'a' || ha == 'A'){
                printf("Please enter your value in Acres: ");
                scanf(" %f", &conversionTwo);
                result = conversionTwo / 2.47105;
                printf("Your conversion is: %0.4f hectares.\n",result);
            }else{
                printf("Invalid input\n");
            }
        }else if(value == 3){
            char lg;
            float conversionThree = 0.0;
            printf("L for conversion from Litres to Gallons\nG for conversion from Gallons to Litres\n");
            scanf(" %c", &lg);
            if(lg == 'l' || lg == 'L'){
                printf("Please enter your value in Litres: ");
                scanf(" %f", &conversionThree);
                result = conversionThree / 3.78541;
                printf("Your conversion is: %0.4f Gallons.\n",result);
            }else if(lg == 'g' || lg == 'G'){
                printf("Please enter your value in Gallons: ");
                scanf(" %f", &conversionThree);
                result = conversionThree * 3.78541;
                printf("Your conversion is: %0.4f Litres.\n",result);
            }else{
                printf("Invalid input\n");
            }
        }else if(value == 4){
            char km;
            float conversionFour = 0.0;
            printf("K for conversion from Kilometre to Mile\nM for conversion from Mile to Kilometre\n");
            scanf(" %c", &km);
            if(km == 'k' || km == 'K'){
                printf("Please enter your value in Kilometre: ");
                scanf(" %f", &conversionFour);
                result = conversionFour / 1.60934;
                printf("Your conversion is: %0.4f Mile.\n",result);
            }else if(km == 'm' || km == 'M'){
                printf("Please enter your value in Mile: ");
                scanf(" %f", &conversionFour);
                result = conversionFour * 1.60934;
                printf("Your conversion is: %0.4f kilometre.\n",result);
            }else{
                printf("Invalid input\n");
            }
        }else{ // if user number does not match the options
            printf("Please try again, input error.\n");
        }

    }while(value!=5); // while the value is not 5 keep running
}