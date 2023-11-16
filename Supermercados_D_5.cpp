#include <stdio.h>
#include <string.h>

int main(){

	
	long long Numeros_Rifa [] = {894985943020763,
        				165331255320221,
        				248386737320130,
        				183923092220561}; //Preset de los numeros de rifa

    int Numero_Descuento[4][10] = {8949899430,
	 								7653512593,
									9383867373,
									88392904209}; //Preset de los codigos con descuento
									
									
    int Codigo_barras; //10 Digitos
    int Codigo_Almacen; // 5 digitos los dos primeros son 20
    
        printf("\nCajeros D5\n");
		
		printf("\nIngrese el codigo de barras\n");
        scanf("%i", &Codigo_barras);
        
        printf("\nIngrese el codigo del Almacen\n");
        scanf("%i", &Codigo_Almacen);


    }
    
    
return 0;
}
