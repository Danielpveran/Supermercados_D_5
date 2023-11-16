#include <stdio.h>
#include <string.h>

int main(){

	
	long long Numeros_Rifa [] = {894985943020763,
        				165331255320221,
        				248386737320130,
        				183923092220561}; //Preset de los numeros de rifa

    char Numero_Descuento[4][10] = {8949899430,
	 								7653512593,
									9383867373,
									88392904209}; //Preset de los codigos con descuento
									
									
    char Codigo_barras[11]; //10 Digitos
    char Codigo_Almacen[6]; // 5 digitos los dos primeros son 20
    

	    printf("\nCajeros D5\n");
			
		printf("\nIngrese el codigo de barras\n");
	    scanf("%10s", &Codigo_barras);
	        
	
	        
	    //Comparativa de Codigo de Barras
	    if (strlen(Codigo_barras) != 10) {
	        printf("\nEl codigo de barras debe ser de 10 caracteres.\n");
	        return 1;
			}

		printf("\nIngrese el codigo del Almacen\n");
	    scanf("%5s", &Codigo_Almacen);
	        
		//Comparativas de Codigo Almacen
		if (strlen(Codigo_Almacen) != 5) {
	        printf("\nEl codigo de Almacen debe ser de 5 caracteres.\n");
	        return 1;
			}
			else{
				if (strlen(Codigo_Almacen, "20",2) != 0)
			}
		
				
return 0;
}
