#include<stdio.h>
#include<conio.h>
int main()
{
	char choice;
	int a,b,c,mid;
		printf("enter your choice of the below given number\n a>to check if the given number is odd or even.\n b> \tfinding largest among two number.\n c>\t finding the middle number from three number.\n d>\t finding the samallest from three number");
		scanf("%c",&choice);
		switch (choice)
		{
			case'a':
				printf("enter number");
				scanf("%d",&a);
				if(a%2==0)
				{
					printf("even number");
				}
				else 
				{
				printf("odd number");
				}
				break;
				case'b':
					printf("enter any two number");
					scanf("%d%d",&a,&b);
					if(a>b)
					{
						printf("largest is =%d",a);
					}
					else {
						printf("largest is=%d",b);
						
					}
					break;
					case'c':
					printf("enter any three number");
					scanf("%d%d%d%d",&a,&b,&c,&mid);
					if(a>b&&a>c)
					{
						if(b>c)
					{
						mid=b;
					}
					else if(b<c)
					{
						mid=c;
					}
					
											}	
											if (b>c&&b>a)
											{
												if(a>c)
												{
													mid=a;
												}
												else if(c>a)
												{
													mid=c;
												}
																}	
																if (c>b&&c>a)
																{
																	if(a>b)
																	{
																		mid=a;
																		
																	}
																	else if(b>a){
																		mid=b;
																	}
																				}
																				break;
																				case'd':
																				printf("enter any three number");
																				scanf("%d%d%d",&a,&b,&c);
																				if(a<b&&a<c)
																				{
																					printf("it is the smallest=%d",a);
																					
																								}
																								else if(b<c&&b<a)
																									printf("it is the smallest=%d",b);
																												}				
																												else{
																													printf("it is the smallest=%d",c);
																												}
																												break;
																												default:
																												printf("\n no valid input");
																												
		}
getch();
return 0;
}

