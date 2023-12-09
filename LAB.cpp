#include<stdio.h>
int main(){
 
/*int age =19;
float pie = 3.14;
char star = '*';
printf("age is %d\n",age);
printf("value of pie is %f\n",pie);		
printf("star is %c",star);

int a, b;

printf("\nenter a :");
scanf("%d",&a);

printf("enter b :");
scanf("%d",&b);

printf("sum is %d",a * b);*/


/*int main() { 
 int a,b,r; 
 scanf("%d%d%d",&a,&b,&r); 
 
 if(a+b==r){ 
 printf("+"); 
 } 
 else if(a-b==r){ 
 printf("-"); 
 } 
 else if(a*b==r){ 
 printf("*"); 
 } 
 else if(a/b==r){ 
 printf("/"); 
 } 
 
 else if(a%b==r){ 
 printf("%%"); 
 }*/
 
 /*printf("HELLO WORLD");*/

	/*int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			printf("%d",j);
		}
		printf("* ");	
		
	}*/
	
	/*int n,count=1;
	printf("enter the number");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d\t",count);
			count++;
	    }
		printf("\n");
		}*/
		
		/*int n;
		printf("enter the value of n");
		scanf("%d",&n);
		for (int i=1;i<=n;i++)
		{
			for(int k=i;k<n;k++)
			{
				printf(" ");
			}
			for (int j=1;j<=n;j++)
			{
				printf("* ");
		    }
			printf("\n");
		}*/
		
/*	printf("HELLO WORLD");
	int a, b;
	printf("\nenter a");
	scanf("%d", &a);
	
	printf("enter b");
	scanf("%d", &b);
	
	printf("sum is : %d", a * b);*/
	
	/* float numOne, numTwo, res;
    int choice;
    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>numOne>>numTwo;
        }
        switch(choice)
        {
            case 1:
                res = numOne+numTwo;
                cout<<"\nResult = "<<res;
                break;
                     case 2:
                res = numOne-numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = numOne*numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 4:
                res = numOne/numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;*/
    
     //AREA OF SQUARE
    
	/*float side;
	printf("ENTER A SIDE");
	scanf("%f",&side);
	printf("are is- %f",side*side);*/
		
	/*	float radius;
	printf("ENTER A RADIUS");
	scanf("%f",&radius);
	printf("are is- %f",3.14*radius*radius);*/
	
	/*float oldage = 20; 
	float newage = 1;
	printf("age is= %.2f%.2f",oldage+newage);*/
	
	/*int b,c;
    b= c = 1;
    int a = b + c;
    int power = pow(b,c);
    printf("%d", power);*/

return 0;
}
