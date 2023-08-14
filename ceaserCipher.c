#include<stdio.h>

int main(){
	
	
	char plain_text[100], ceaser_cipher[100];
	printf("Enter the plain text:\n");
	scanf("%s",&plain_text);
	
	int key;
	printf("Enter the key:\n");
	scanf("%d",&key);
	key = key%26; // for getting number less than 26 if large number provided
	int i =0;
	for(i = 0 ; i<strlen(plain_text); i++){
		
		char temp = plain_text[i] + key;
		if(temp > 'z'){
			temp = temp-26;
		}
		ceaser_cipher[i] = temp;
	}
	
	printf("the ceaser cipher is : %s",ceaser_cipher);
	
	
	return 0 ;
}
