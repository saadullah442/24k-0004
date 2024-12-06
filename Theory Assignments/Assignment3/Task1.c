#include <stdio.h>


struct employee {
	int code;
	char name[20];
	char date_of_joining[20];
};


void create_employee(struct employee emp[],char *emp_name, int emp_code, char emp_date[20], int index){
	strcpy(*(emp + index).name , emp_name);
	*(emp + index).code = emp_code;
	strcpy(*(emp + index).date_of_joining , emp_date);
	
}

void create_tenure(){
	
}

int main(){
	int code;
	char date[11];
	char name[20];
	
	
	struct employee emp[4];
	int i=0;
	for(;i < 4; i++){
		printf("Enter employee name");
		scanf("%s", name);
		printf("Enter employee code");
		scanf("%d", &code);
		printf("Enter employee date of employement in format DD/MM/YYYY");
		scanf("%s", date);
		
		create_employee(emp, name, code, date, i);
	}
	
	
	
	
	return 0;
}
