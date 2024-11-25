#include<stdio.h>

int main(){
	float numberOne,numberTwo;
	printf("moi nhap 2 so bat ki: ");
	scanf("%f %f",&numberOne, &numberTwo);
	
	int i=0;
	int calc;
	float sum=numberOne+numberTwo;
	float multy=numberOne*numberTwo;
	float minus=numberOne-numberTwo;
	float divide=numberOne/numberTwo;

	
	while(i==0){
	  printf("\n 1.Tong 2 so\n 2.Tich 2 so\n 3.Hieu 2 so\n 4.Thuong 2 so\n 5.Thoat\n");
	  scanf("%d",&calc);
	  
	  switch(calc){
	  	case 1: 
		  
		        printf("%.1f + %.1f = %.1f\n", numberOne, numberTwo, sum);
		        break;
	    case 2:
                printf("%.1f * %.1f = %.1f\n", numberOne, numberTwo, multy);
                break;
        case 3:
                printf("%.1f - %.1f = %.1f\n", numberOne, numberTwo, minus);
                break;
        case 4:
		        printf("%.1f / %.1f = %.1f\n", numberOne, numberTwo, divide); 
				break;
	    case 5:
		       printf("thoat chuong trinh\n");
               i = 1;       
		  }
	}
	  
	  
	  
	  
	  	
		
		
		
	

      return 0;
}

