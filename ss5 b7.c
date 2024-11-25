#include<stdio.h>

int main(){
	int numberOne,numberTwo;
	printf("moi nhap so nguyen duong thu nhat: ");
	scanf("%d",&numberOne);
	printf("moi nhap so nguyen duong thu hai: ");
	scanf("%d",&numberTwo);
	
	int mod=1;
	int check=0;
	
	
	while(check==0){
		if (numberOne>numberTwo){
			 mod=numberOne%numberTwo;
		 if(mod==0){
		 	printf("UCLN la %d", numberTwo);
		 	check=1;
		 }else{
		 	
		 numberOne=numberTwo;
		 numberTwo=mod;
	}
	}else if(numberOne<numberTwo){
		 	mod=numberTwo%numberOne;
		 	if(mod==0){
		 	printf("UCLN la %d", numberTwo);
		 	check=1;
		 }else{
		 	 
		    numberTwo=numberOne;
		    numberTwo=mod;
		}

}
}

		
	


	

		 
		 
		
	
	
	
		
		
		
		
	
	
	
	
	
	

   return 0;
}

