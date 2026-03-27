#include <stdio.h>

enum HttpStatus {
	OK = 200,
	BadRequest = 400,
	NotFound = 404,
	InternalServerError = 500
};

void categorizeStatus(int code){
	printf("Status Code %d: \n", status);
	
	if(status > 200 && status < 299){
		printf("Success!\n")
	} else if(status > 400 && status < 499){
		printf("Client Error!\n")
	} else if(status > 500 && status < 599){
		printf("Server Error!\n")
	} else if(status > 100 && status < 199){
		printf("Informational")
	} else if(status > 300 && status < 399){
		printf("Redirection...");
	}else {
		printf("Invalid Status Code!\n")
	}
}

int main(){
	//Using Enumerations
	
	categorizeStatus(OK);
	categorizeStatus(BadRequest);
	categorizeStatus(NotFound);
	categorizeStatus(InternalServerError);
	
	//Using normal codes
	
	categorizeStatus(201);
	categorizeStatus(503);
	categorizeStatus(800);
	categorizeStatus(328);
	
	return 0;
}

