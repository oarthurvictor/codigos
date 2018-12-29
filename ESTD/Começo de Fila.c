typedef struct{
	char nome[50];
	char local[20];
	char hora[5];
	char data[10];
}Evento

Evento tipoEvento[tam];

typedef struct {
	int inicio,fim;
	Evento tipoEvento[tam];
}Fila;

int cheia (Fila *ptrFila){
	if(ptr->fim == tam)
		return 1;
	else
		return 0;
};

int vazia (Fila *ptrFila){
	if(ptr->inicio == ptr->fim)
		return 1;
	else
		return 0;
};

Fila *criafila(){
	Fila *ptrFila = (Fila *)malloc(sizeof(Fila));
	if (ptrFila == NULL)
		exit 0;
	ptrFila->inicio=0;
	ptrFila->fim=0;
return ptrFila;	
}



