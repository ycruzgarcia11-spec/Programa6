# include <stdio.h>
    int main(void){
        int personas;
        int opcion;
        float costoporplatillo, costototal;

        printf("Ingresa el numero de personas:");
        scanf("%d", &personas);

        if(personas <= 200){
            opcion = 1;
        }else if(personas <= 300){
            opcion = 2;   
        }else{
            opcion = 3;
        }


        switch(opcion){
            case 1:
                costoporplatillo = 95;
                break;
            case 2:
                costoporplatillo = 85;
                break;
            case 3:
                costoporplatillo = 75;
                break;
             default:
                costoporplatillo =0;
        }


        printf("\nNumero de personas:%d\n", personas);
        printf("Costo por platillo:$%2f\n", costoporplatillo);
        printf("costo total del banquete:$%2f\n", costototal);

        return 0;

    }