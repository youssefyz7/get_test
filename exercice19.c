#include <stdio.h>

int main (){
	
	float pht , total;
	char categorie;
	
	printf("veuillez entrer la categorie de produit ");
	scanf("%c",&categorie);
	printf("veuillez entrer le prix hore taxe ");
	scanf("%f",&pht);
	
	if(categorie == 'a'){	
	total=7*pht/100;
	printf("le prix ttc = %.2f dh" ,total+pht);}
	else if(categorie == 'b'){
	total=20*pht/100;
	printf("le prix ttc = %.2f dh" ,total+pht );}
    else if(categorie == 'c'){
    total=25*pht/100;
	printf("le prix ttc = %.2f dh" ,total+pht );}
	else
	printf("la categorie nexiste pas");
	
	return 0;
}
