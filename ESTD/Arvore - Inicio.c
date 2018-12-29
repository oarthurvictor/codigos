typedef struct arvore{
	char conteudo;
	struct arvore *esq;
	struct arvore *dir;
	}arvore;

arvore *criaArvoreVazia(){
	return	NULL;
}

arvore *criaArvore (char c, arvore *c, arvore *d){
	arvore *no = (arvore *) malloc (sizeof(arvore));
	if (no == NULL)
		exit (0);
	no->conteudo = c;
	no->esq = e;
	no->dir = d;
	return no;
}

arvore imprimeArvore (arvore *a){
	if (a =! NULL){
		imprimeArvore(a->esq);
		imprimeArvore(a->dir);
		printf("%s\n", a->conteudo);
	}
}

main (){
	arvore *a1 = criaArvore(d, criaArvoreVazia(), criaArvoreVazia());
	arvore *a2 = criaArvore(b, criaArvoreVazia, a1);
	arvore *a3 = criaArvore(e, criaArvoreVazia, criaArvoreVazia);
	arvore *a4 = criaArvore(f, criaArvoreVazia, criaArvoreVazia);
	arvore *a5 = criaArvore(c, a3, a4);
	arvore *a6 = criaArvore(z, a2, a5);
}
