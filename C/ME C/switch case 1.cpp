                             /*switch case*/
    #include<stdio.h>
	#include<conio.h>
	main()
	{
		int a,b,c,s;
		do
		{
			printf("\n 1.add \n 2.sub \n 3.mul \n 4.exit \n");
			printf("\n enter your choise: ");
			scanf("%d",&s);
			switch(s)
			{
				case 1:
					printf("\n enter two numbers:\n");
					scanf(" %d%d",&a,&b);
					c=a+b;
					printf("\n sum= %d",c);
					break;
					case 2:
						printf("\n enter two numbers:\n");
					    scanf(" %d%d",&a,&b);
					    c=a-b;
					    printf("\n sub= %d",c);
					    break;
					    case 3:
					    	printf("\n enter two numbers:\n");
					        scanf(" %d%d",&a,&b);
					        c=a*b;
					        printf("\n mul= %d",c);
					        break;
					        case 4:
					        	printf("\n good bye");
					        	break;
					        	default:
					        		printf("\n invalide input");
					        	}
					        	
	       	}
	       	while(s!=4);
	       	getch();
					 }                 
