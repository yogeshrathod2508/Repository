#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct get {
  int house_no, street_no, date, members, quantity;
  char area[10], city[20], district[20], state[20], waste_type[3];
}
ob[10];

void entry_data() {

  static int i = 0, cnt = 0;

  printf("\n----------------------------------------------------------------------Entry %d-------------------------------------------------------------------------\n", i + 1);
  printf("Enter Your House no. or plot no.:");
  scanf("%d", & ob[i].house_no);

  printf("Enter Street no.:");
  scanf("%d", & ob[i].street_no);

  printf("Enter number of members:");
  scanf("%d", & ob[i].members);

  printf("Enter Quantity(in kgs):");
  scanf("%d", & ob[i].quantity);

  printf("Enter area you live in:");
  scanf("%s", & ob[i].area);

  printf("Enter your city:");
  scanf("%s", & ob[i].city);

  printf("Enter District name:");
  scanf("%s", & ob[i].district);

  printf("Enter state name:");
  scanf("%s", & ob[i].state);

  printf("Enter waste type:(dry/wet):");
  scanf("%s", & ob[i].waste_type);

  i++;
  cnt++;

}

void display(int x) {
  for (int i = 0; i <=x; i++) {

      printf("\n---------------------------------------------------------------------Entry %d--------------------------------------------------------------------------\n", i + 1);
	  printf("\nYour house no is %d\n", ob[i].house_no);
	  printf("\nYour Street number is %d\n", ob[i].street_no);
	  printf("\nNumber of members in the house is %d\n", ob[i].members);
	  printf("\nArea: %s\n", ob[i].area);
	  printf("\nCity: %s\n", ob[i].city);
	  printf("\nDistrict:%s\n", ob[i].district);
	  printf("\nState: %s\n", ob[i].state);
	  printf("\nWaste Type: %s\n", ob[i].waste_type);
	  printf("\nQuantity: %d\n", ob[i].quantity);

  }
}

void find() 
{

  int n,i;

	printf("\n\t\t\t\t\t\t\t\t\t\tFind\n");
	printf("\tPress 1: Display all the houses who are present in the street no 3 and in city Delhi\n");
	printf("\tPress 2: Display all the houses whose waste type is wet and quanity is more than 2kgs\n");
	printf("\tPress 3: Display all the houses in the state of Gujarat having dry waste type.\n");
	printf("\tPress 4: Display all the houses in Delhi which fall in street no 5 and no of members is greater than 10.\n");
	printf("\tPress 5: Display all the houses in Maharashtra which have dry waste type and no of members is greater than 5.\n");
	printf("\tPress 6: Display all the houses in Maharashtra whose no of family members is less than 3 and suggestions are given\n");
	printf("\tPress 7: Display all the houses in Maharashtra and Delhi which have wet waste type and quantity is greater than 6 kg.\n\n\n");
	
	printf("\t\t\t\tEnter your Choice:");
	scanf("%d",&n);
	
	
	switch(n)
	{
			case 1:
			for(i=0;i<=6;i++)
			{
				if ( (strcmp(ob[i].city,"Delhi") == 0) && (ob[i].street_no==3)) 
					{
					
					  printf("\n\t\t\t\t\tEntry %d\n", i+1);
					  printf("\nYour house no is %d\n", ob[i].house_no);
					  printf("\nYour Street number is %d\n", ob[i].street_no);
					  printf("\nNumber of members in the house is %d\n", ob[i].members);
					  printf("\nArea: %s\n", ob[i].area);
					  printf("\nCity: %s\n", ob[i].city);
					  printf("\nDistrict:%s\n", ob[i].district);
					  printf("\nState: %s\n", ob[i].state);
					  printf("\nWaste Type: %s\n", ob[i].waste_type);
					  printf("\nQuantity: %d\n", ob[i].quantity);
					} 
				  else 
				  {
					printf("\nEntry [%d] does not have required data.\n",i+1);
				  }	
				  
			}
			break;
			
			case 2:
			for(i=0;i<=6;i++)
			{
				if(strcmp(ob[i].waste_type,"wet")==0 && (ob[i].quantity>=2))
				{
			
					  printf("\n\t\t\t\t\tEntry %d\n", i+1);
					  printf("\nYour house no is %d\n", ob[i].house_no);
					  printf("\nYour Street number is %d\n", ob[i].street_no);
					  printf("\nNumber of members in the house is %d\n", ob[i].members);
					  printf("\nArea: %s\n", ob[i].area);
					  printf("\nCity: %s\n", ob[i].city);
					  printf("\nDistrict:%s\n", ob[i].district);
					  printf("\nState: %s\n", ob[i].state);
					  printf("\nWaste Type: %s\n", ob[i].waste_type);
					  printf("\nQuantity: %d\n", ob[i].quantity);
					
				}
				else
				{
					printf("\nEntry [%d] does not have required data.\n",i+1);
				}
			}
			break;
			
			
			case 3:
			for(i=0;i<=6;i++)
			{
				if( strcmp(ob[i].state,"Gujarat")==0)
				{
					if(strcmp(ob[i].waste_type,"dry")==0)
					{
					  printf("\n\t\t\t\t\tEntry %d\n", i+1);
					  printf("\nYour house no is %d\n", ob[i].house_no);
					  printf("\nYour Street number is %d\n", ob[i].street_no);
					  printf("\nNumber of members in the house is %d\n", ob[i].members);
					  printf("\nArea: %s\n", ob[i].area);
					  printf("\nCity: %s\n", ob[i].city);
					  printf("\nDistrict:%s\n", ob[i].district);
					  printf("\nState: %s\n", ob[i].state);
					  printf("\nWaste Type: %s\n", ob[i].waste_type);
					  printf("\nQuantity: %d\n", ob[i].quantity);
					} 
				   else 
				    {
					 printf("\nEntry [%d] does not have required data.\n",i+1);
				    }	
					
				}
				
			}
			break;
			
			case 4:
			for(i=0;i<=6;i++)
			{
				if((ob[i].street_no==5) && (ob[i].members>=10) && (strcmp(ob[i].city,"Delhi")==0))
				{
					
					  printf("\n\t\t\t\t\tEntry %d\n", i+1);
					  printf("\nYour house no is %d\n", ob[i].house_no);
					  printf("\nYour Street number is %d\n", ob[i].street_no);
					  printf("\nNumber of members in the house is %d\n", ob[i].members);
					  printf("\nArea: %s\n", ob[i].area);
					  printf("\nCity: %s\n", ob[i].city);
					  printf("\nDistrict:%s\n", ob[i].district);
					  printf("\nState: %s\n", ob[i].state);
					  printf("\nWaste Type: %s\n", ob[i].waste_type);
					  printf("\nQuantity: %d\n", ob[i].quantity);
					
				}
				else
				{
					printf("\nEntry [%d] does not have required data.\n",i+1);
				}
			}
			break;
			
			case 5:
			
			for(i=0;i<=6;i++)
			{
				if((strcmp(ob[i].state,"Maharashtra")==0) && (ob[i].members>=5) && (strcmp(ob[i].waste_type,"dry")==0))
				{
					
					  printf("\n\t\t\t\t\tEntry %d\n", i+1);
					  printf("\nYour house no is %d\n", ob[i].house_no);
					  printf("\nYour Street number is %d\n", ob[i].street_no);
					  printf("\nNumber of members in the house is %d\n", ob[i].members);
					  printf("\nArea: %s\n", ob[i].area);
					  printf("\nCity: %s\n", ob[i].city);
					  printf("\nDistrict:%s\n", ob[i].district);
					  printf("\nState: %s\n", ob[i].state);
					  printf("\nWaste Type: %s\n", ob[i].waste_type);
					  printf("\nQuantity: %d\n", ob[i].quantity);
				}			  
			
				else
				{
					printf("\nEntry [%d] does not have required data.\n",i+1);
				}
						
			}
			break;
			
			case 6:
			
			for(i=0;i<=6;i++)
			{
				if((strcmp(ob[i].state,"Maharashtra")==0) && (ob[i].members<=3))
				{
					  printf("\n\t\t\t\t\tEntry %d\n", i+1);
					  printf("\nYour house no is %d\n", ob[i].house_no);
					  printf("\nYour Street number is %d\n", ob[i].street_no);
					  printf("\nNumber of members in the house is %d\n", ob[i].members);
					  printf("\nArea: %s\n", ob[i].area);
					  printf("\nCity: %s\n", ob[i].city);
					  printf("\nDistrict:%s\n", ob[i].district);
					  printf("\nState: %s\n", ob[i].state);
					  printf("\nWaste Type: %s\n", ob[i].waste_type);
					  printf("\nQuantity: %d\n", ob[i].quantity);
				}
				
				else
				{
					printf("\nEntry [%d] does not have required data.\n",i+1);
				}
			}
			break;
			
			case 7:
			
			for(i=0;i<=6;i++)
			{
				if((strcmp(ob[i].city,"Delhi")==0) && (strcmp(ob[i].waste_type,"wet")==0) && ob[i].quantity>6)
				{
							  printf("\n\t\t\t\t\tEntry %d\n", i+1);
							  printf("\nYour house no is %d\n", ob[i].house_no);
							  printf("Your Street number is %d\n", ob[i].street_no);
							  printf("Number of members in the house is %d\n", ob[i].members);
							  printf("Area: %s\n", ob[i].area);
							  printf("City: %s\n", ob[i].city);
							  printf("District:%s\n", ob[i].district);
							  printf("State: %s\n", ob[i].state);
							  printf("Waste Type: %s\n", ob[i].waste_type);
							  printf("Quantity: %d\n", ob[i].quantity);
				}
				else
				{
					printf("\nEntry [%d] does not have required data.\n",i+1);
				}
			}
			break;
			
			default:
			printf("I am not sure I understand.");
     
    }
 
}

void main() {
  int i = 0, c,cnt=0;

   while(1)
   {   
		printf("\n\n\n-------------------------------------------------------------___|Waste Management System|___----------------------------------------------------------\n\n\n\n");
		printf("\nFor New Entry press 1 :\nTo display Entry press 2:\nTo find Entry press 3:\nTo Exit press 4:\n");
		printf("Enter your choice:");
		scanf("%d", & c);
		switch (c) 
		{

			case 1:
			  entry_data();
			  break;

			case 2:
			  display(cnt);
			  break;

			case 3:
			  find();
			  break;
			
			case 4:
			exit(0);
			break;
			
			default:
			printf("\nInvalid choice\n\n");
		}
		cnt++;
		  

    }
}
