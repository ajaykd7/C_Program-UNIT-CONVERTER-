
#include<stdio.h>
#include<string.h>
#include<conio.h>
int menu( void );
void length( void );
void temperature(void);
void mass(void);
void currency(void);


main()
{


	{
	char password[30] = "1234", input[30];
	printf("Enter Password: ");

	scanf("%s", input);

	if ( strcmp(password, input) == 0)

	{



	printf("\t\t\t ***Welcome to UNIT CONVERTER*** \n");
	{
		int choice;

	do{
		choice = menu();

		switch(choice)
		{
		case 1: length();
			break;
		case 2: temperature();
			break;
		case 3:mass();
			break;
		case 4:currency();
			break;
		}
	}while(choice != 0);

	}
	}
	else
		printf("Sorry Wrong Password\n");
}
}

int menu(void )         //menu
	{
		int choice;

		do{
			printf("Enter your choice\n");
			printf( "\t1. length\n");
			printf( "\t2. temperature\n");
			printf( "\t3. mass\n");
			printf( "\t4. currency\n");
			printf( "\t0. Quit\n" );
			scanf("%d", &choice);

		}while(choice<0 || choice>5);

		return choice;
	}

	void length( void )           //length function
	{
		int option;
		float value;


		do{
			printf( "Enter your option\n");
		printf( "\t1. meter\n");
		printf( "\t2. feet\n");
		printf( "\t3. centimeter\n");
		printf( "\t4. inch\n");
		printf( "\t5. kilometer\n");
		printf( "\t6. miles\n");
		printf( "\t0. Quit\n");
		scanf( "%d", &option );

		switch(option){

		case 1: {                               //Meter

			printf("Enter meter:\n");
			scanf("%f", &value);
				if (value<0)
			printf("wrong input!\n");
		else
		{

			printf("Feet = %.2f\n", value*3.28);
			printf("Centimeter = %.2f\n", value * 100 );
			printf("Inch = %.2f\n", value * 39.37 );
			printf("Mile = %.6f\n", value * 0.000621 );
			printf("Kilometer = %.4f\n", value/1000 );
				}
				}
			break;

		case 2: {                          //FEET
			printf("Enter feet:\n");
			scanf("%f", &value);
			if (value<0)
			printf("wrong input!\n");
			else
			{
			printf("Meter = %.2f\n", value/3.28);
			printf("Centimeter = %.2f\n", value * 30.48 );
			printf("Inch = %.2f\n", value * 12);
			printf("Mile = %.8f\n", value*0.00018939);
			printf("Kilometer = %.8f\n", value*0.00030479);
				}
				}
			break;
		case 3:{                           //centimeter
			printf("Enter centimeter:\n");
			scanf("%f", &value);
			if (value<0)
			printf("wrong input!\n");
			else
			{
			printf("Feet = %.6f\n", value*.032808);
			printf("Inch = %.4f\n", value*.3937);
			printf("Mile = %.8f\n", value*0.00000621);
			printf("Meter = %.2f\n", value/100);
			printf("Kilometer = %.5f\n", value/100000);
			   }
			   }
			break;
		case 4:{                              //inch
			printf("Enter inch:\n");
			scanf("%f", &value);
			if (value<0)
			printf("wrong input!\n");
			else
			{
			printf("Meter = %.4f\n", value*0.0254);
			printf("Mile = %.8f\n", value*0.00001578);
			printf("Kilometer = %.2f\n", value*0.0000254);
			printf("Feet = %.8f\n", value*.08333333);
			printf("Centimeter = %.2f\n", value * 2.54 );
			   }
			   }
			break;
		case 5:{                            //kilometer
			printf("Enter kilometer:\n");
			scanf("%f", &value);
			if (value<0)
			printf("wrong input!\n");
			else
			{
			printf("Feet = %.2f\n", value*3280.83);
			printf("Centimeter = %.2f\n", value * 100000 );
			printf("Inch = %.4f\n", value * 39370.0787 );
			printf("Mile = %.6f\n", value * 0.62137 );
			printf("Meter = %.4f\n", value*1000 );
			   }
			   }
			break;
		case 6:{                        //miles
			printf("Enter miles:\n");
			scanf("%f", &value);
			if (value<0)
			printf("wrong input!\n");
			else
			{
			printf("Feet = %.2f\n", value*5280);
			printf("Centimeter = %.2f\n", value * 160934.4 );
			printf("Inch = %.2f\n", value * 63360 );
			printf("Kilometer = %.6f\n", value * 1.609344 );
			printf("Meter = %.3f\n", value*1609.344);
			   }
			   }
			break;
		}

		}while( option != 0 );
	}


	void temperature( void )             //temperature function
	{
		int option;
		float value;


		do{
			printf("Enter your option:\n");
			printf( "\t1. celcius\n");
			printf( "\t2. farenhite\n");
			printf( "\t3. kelvin\n");
			printf( "\t0. Quit\n");
			scanf( "%d", &option );

			switch(option){
			case 1:{                          //celcius
				printf("Enter celcius:\n");
				scanf("%f", &value);

				printf("Farenhite = %.2f\n", 32 + (value * 1.8));
				printf("Kelvin = %.2f\n", (274.15 + value -1));
				   }
				break;
			case 2:{                          //farenhite
				printf("Enter fahrenhite:\n");
				scanf("%f", &value);

				printf("Celcius = %.2f\n", 0.55*value-17.78 );
				printf("Kelvin = %.4f\n", (255.22+.55*value ));
				   }
				break;
			case 3:{                          //kelvin
				printf("Enter kelvin:\n");
				scanf("%f", &value);

				printf("Celcius = %.2f\n", (-273.15 + value));
				printf("Fahrenhite = %.2f\n",  value*1.8-459.4);
				   }
				break;

			}
		}while( option !=0 );
	}


	void mass( void )           //mass function
	{
		int option;
		float value;

		do{
			printf("Enter your option:\n");
		printf( "\t1. kilogram\n");
		printf( "\t2. gram\n");
		printf( "\t3. ton\n");
		printf( "\t4. ounce\n");
		printf( "\t5. pound\n");
		printf( "\t0. Quit\n");
		scanf( "%d", &option );

		switch(option){
		case 1:{                               //kilogram
				printf("Enter Kilogram:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("gram = %f\n", value*1000);
				printf("ton = %f\n", value/1000);
				printf("ounce = %.6f\n", value*35.273961);
				printf("pound = %f\n", value*2.204622);
			   }
			   }
				break;
		case 2:{                      //gram
				printf("Enter Gram:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("kilogram = %f\n", value/1000);
				printf("ton = %.6f\n", value/1000000);
				printf("ounce = %.8f\n", value*0.03527396);
				printf("pound = %.8f\n", value*0.00220462);
			   }
			   }
			break;
		case 3:{                            //ton
				printf("Enter Ton:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("kilogram = %f\n", value*1000);
				printf("gram = %.6f\n", value*1000000);
				printf("ounce = %.4f\n", value*35273.9619);
				printf("pound = %.6f\n", value*2204.622621);
			   }
			   }
			break;
		case 4:{                             //ounce
				printf("Enter Ounce:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("kilogram = %.8f\n", value*0.02834952);
				printf("ton = %.8f\n", value*0.00002834);
				printf("gram = %.6f\n", value*28.349523);
				printf("pound = %.4f\n", value*0.0625);
			   }
			   }
			break;
		case 5:{                               //pound
				printf("Enter Pound:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("kilogram = %.6f\n", value*.453592);
				printf("ton = %.8f\n", value*0.00045359);
				printf("ounce = %.2f\n", value*16);
				printf("gram = %.8f\n", value*453.5923);
			   }
			   }
			break;

		}
		}while( option != 0 );
	}


	void currency(void)

	{                              //currency function
		int option;
		float value;

		do{
			printf("Enter your option:\n");
		printf( "\t1. Taka\n");
		printf( "\t2. Euro\n");
		printf( "\t3. Dollar\n");
		printf( "\t4. Ausdollar\n");
		printf( "\t5. Pound\n");
		printf( "\t0. Quit\n");
		scanf( "%d", &option );

		switch(option){
		case 1:{                            //taka
				printf("Enter Taka:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("euro = %f\n", value/105);
				printf("dollar = %f\n", value/72);
				printf("ausdollar = %.6f\n", value/75);
				printf("pound = %f\n", value/118);
			   }
			   }
				break;
		case 2:{                      //euro
				printf("Enter Euro:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("taka = %.8f\n", value*105);
				printf("dollar = %.8f\n", value/0.68571429);
				printf("ausdollar = %.8f\n", value/0.71428571);
				printf("pound = %.4f\n", value/1.1238);
			   }
			   }
			break;
		case 3:{                       //dollar
			printf("Enter Dollar:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("taka = %.8f\n", value*72);
				printf("euro = %.8f\n", value*0.68571429);
				printf("ausdollar = %.8f\n", value*0.71428571);
				printf("pound = %.6f\n", value/1.638888);
			   }
			   }
			break;
		case 4:{                            // ausdollar
			printf("Enter Ausdollar:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("taka = %.8f\n", value*75);
				printf("dollar = %.8f\n", value/0.68571429);
				printf("euro = %.8f\n", value*0.71428571);
				printf("pound = %.4f\n", value*0.6356);
			   }
			   }
			break;
		case 5:{                    //pound
			printf("Enter Pound:\n");
				scanf("%f", &value);
				if (value<0)
				printf("wrong input!\n");
				else
				{
				printf("taka = %.8f\n", value*118);
				printf("dollar = %.8f\n", value*0.68571429);
				printf("ausdollar = %.8f\n", value*0.71428571);
				printf("euro = %.4f\n", value*1.1238);
			   }
			   }
			break;
		}
		}while( option != 0 );
	}





