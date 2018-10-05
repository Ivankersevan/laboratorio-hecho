

typedef struct{
    char nombre[51];
    char apellido[51];
    int cuit;
    int id;
    int status; /**< Activo (1) o Inactivo (0)  */
}cliente;


void setStatus(cliente clienteArray[],int arrayLenght,int value);
int findEmptyPlace(cliente clienteArray[],int arrayLenght);
int findclienteById(cliente clienteArray[],int arrayLenght,int id);
void setCliente(cliente clienteArray[],int freePlaceIndex, char nombre[],char apellido[], int cuit);
void showArray(cliente clienteArray[],int arrayLenght);
