#include <stdio.h>
#include <string.h>

int main(){

	
	char Numeros_Rifa [4][20] = {"894985943020763",
        				"165331255320221",
        				"248386737320130",
        				"183923092220561"}; //Preset de los numeros de rifa

    char Numero_Descuento[4][12] = {"8949899430",
	 								"7653512593",
									"9383867373",
									"88392904209"}; //Preset de los codigos con descuento
									
									
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
    	if (strlen(Codigo_Almacen) != 5 || strncmp(Codigo_Almacen, "20", 2) != 0) {
        printf("\nEl código de Almacén debe ser de 5 caracteres y empezar por \"20\".\n");
        return 1;
    	}
    	//Comienza el sistema para revisar si tiene descuentos
    	printf("\nProducto Registrado.\n");
    	
    	int descuento = 0;
    	
    	for (int i = 0; i < 4; i++) {
        	if (strcmp(Codigo_barras, Numero_Descuento[i]) == 0) {
            	descuento = 1;
            	break;
        	}
    	}
    	
    	if (descuento) {
			printf("\nSu producto tiene 20% de descuento\n");
		}
    	
    
				
return 0;
}
