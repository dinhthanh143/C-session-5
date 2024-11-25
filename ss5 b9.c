#include<stdio.h>

int main(){
	float a,b,c;
	int i=0;
	float sum;
	float average;
	float smallest;
	float biggest;
	int command;
	
	int numberCheck=0;
	
    
	

	while(i==0){
	
	  printf("\n MENU\n\n 1.Nhap 3 so so\n 2.Tong 3 so\n 3.Trung binh cong 3 so\n 4.So nho nhat \n 5.so lon nhat\n 6.Thoat\n");
	  scanf("%d",&command);
	  
        switch(command){
        	case 1:
        		printf("moi nhap so thu nhat: ");
        		scanf("%f",&a);
        		printf("moi nhap so thu hai: ");
        		scanf("%f",&b);
        		printf("moi nhap so thu ba: ");
        		scanf("%f",&c);
        		
        		numberCheck=1;
        		
        		
        	    break;
        	case 2:	
        	    sum=a+b+c;
				printf(" tong 3 so la: %.1f\n",sum);
				
				break;
			case 3:
				average = (a+b+c)/3;
				printf("trung binh cong 3 so la: %.1f\n",average);
				break;
		    case 4:
		          if (numberCheck==0){
		          	printf("ban chua nhap so!\n");
				  }else if(a<b && a<c){
				  	printf("so nhat la %.1f\n",a);
				  }else if(b<a && b<c){
				  	printf("so nhat la %.1f\n",b);
				  }else if(c<b && c<a){
				  	printf("so nhat la %.1f\n",c);
				  }
				  break;
		    case 5:
		    	if (numberCheck==0){
		          	printf("ban chua nhap so!\n");
				  }else if(a>b && a>c){
				  	printf("so lon la %.1f\n",a);
				  }else if(b>a && b>c){
				  	printf("so lon la %.1f\n",b);
				  }else if(c>b && c>a){
				  	printf("so lon la %.1f\n",c);
				  }
				  break;
			case 6: 
			    printf("Thoat chuong trinh.\n");
						        i=1;
		           
		        
				
				
     }
     
     
}
        	
        	
        	
        	
			  




   return 0;
}

