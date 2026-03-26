#define MAX 60
int datos[MAX];
int n = 0;
int cargado = 0;


void mostrarVector(int v[], int tam){
    for(int i = 0;i< tam; i++){
        printf("%d", v[i]);
    }
    printf("\n");
}
void registrarDatos(){
    printf("cantidad Datos: ");
    Scanf("%d",&n);

    for(int i = 0; i < n;i++){
        printf("Dato %d:",i + 1)
        Scanf("%d",&datos[i]);
    }
    cargado = 1;
}

void burbuja() {
    int v[MAX];

    for(int i = 0;i < n;i++)
    v[i] = datos[i];
printf("\n---Metodod borbuja---\n");

for(int i = 0;i < n-1;i++){
    for(int j = 0; j < n-i-1;i++)

    if(v[j]>v[j+1]){
        int temp = v[j];
        v[j] = v [j+1];
        v[j+1] = temp;

        printf("intercambio: ");
        mostrarVector(v,n);
}
}
void seleccion(){
    int v[MAX];

    for(int i = 0; i < n; i++)
    v[i] = datos[i];

    printf("\n---Metodos seleccion--\n");

    for(int i = 0; i < n-1; i++){

        int min = i;

        for(int j = i + 1;j < n; j++){
            if(v[j] <[min]){
                min = j;
            }
        }
        if(min !=i){
            int temp = v[i];
            v[i] = v[min];
            v[min] = temp;

            printf("intercammbio");
            mostrarVector(v,n);
        }
        printf("Fin ciclo%d:",i + 1);
        mostrarVector(v,n);
     }
    }
    void insercion(){
        int v[MAX];

        for(int i = 0;i<n;i++)
        v[i] = datos[i];

        printf("\n---Metodo insercion---\n");

        for(int i = 1;i < n;i++){

            int clave = v[i];
            int j = i-1;

            while(j >= 0 && v[j]> clave){
                v[j+1] = v[j];
                j--;

                printf("movimiento:");
                mostrarVector(v,n);

            }
            v[j+1] = clave;

            printf("Fin ciclo %d", i);
            mostrarVector(v,n);

        } 
    
    }

    int main(){
        int opcion;

        do{
            printf("\n---Menu--\n");

            printf("1.Regiatrar datos\n");

            if(cargado){
                printf("2.Mostrar Arreglo original\n");
                printf("3.Ordenar burbuja\n");
                printf("4.Ordenar Seleccion\n");
                printf("5.Ordenar Insercion\n")
            }

            printf("6.Salir\n");

            printf("Opcion");
            Scanf("%d", &Opcion);

            switch (Opcion){

                case 1:
                registrarDatos();
                break;

                case 2:
                if(cargado){
                    printf("Arreglo original:\n");
                    mostrarVector(datos,n);
                }
                break;

              case 3:
              if(cargado);
              burbuja();
              break;
              
              case 4:
              if(cargado);
              seleccion();
              break;

              case 5:
              if(cargado);
              insercion();
              break;

              case 6:
              printf("saliendo...\n");
              break;

              default:
              printf("opcion invalidad\n");

            }  
        }while(opcion !=6);
        return 0;
        
    }
}