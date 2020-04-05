#include <stdio.h>









float Millimeters_to_Meters (float Millimeters_Value)    //To convert millimeter to meters.
{
	
        scanf ("%f", &Millimeters_Value);

	return Millimeters_Value / 1000;
	
}

float Meters_to_Millimeters (float Meters)       //To convert meter to millimeters.
{   
	scanf("%f", &Meters);
	return Meters * 1000.0;
}


float Centimeters_to_Meters (float Centimeters)  //To convert centimeter to meters.

{
       scanf ("%f", &Centimeters);
       
       return Centimeters / 100.0;
}



int main ()
{
	float Unit_centimeters = 0.0, Unit_Meters = 0.0,Unit_Millimeters = 0.0, Millimeters_Value = 0.0, Meters_Value = 0.0, Centimeters_Value = 0.0, result;
        int Menu_Options = 0;
        
	printf ("****************************\n");
        printf ("WELCOME TO MENU OPTIONS\n");
	printf ("****************************\n"); 
	printf ("Select an option from Menu [1-3]\n");
	printf ("1. Centimeters.\n");
	printf ("2. Millimeters.\n");
	printf ("3. Meters.\n");

        scanf ("%d", &Menu_Options);

         switch (Menu_Options) 
	 {
		 case 1:
			
		         result = Centimeters_to_Meters (Centimeters_Value);
			 printf ("%1.2f\n", result);
			 break;
                 case 2:
			 
			 result = Millimeters_to_Meters (Millimeters_Value);
			
		         printf("%1.2f\n", result);
			 
			 break;
			 
			 
			
	         case 3: 
			 
			 result = Meters_to_Millimeters (Meters_Value);
			 printf ("%1.2f", result);
			 break;

		 default:
			 printf ("ERROR! THE OPTION SELECTED DOES NOT EXIST, TRY AGAIN WITH OTHER OPTION\n");
	 }	 
      
}
