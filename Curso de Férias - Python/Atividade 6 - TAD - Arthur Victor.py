#Aluno: Arthur Victor

class No:

    def __init__(self, carga=0, proximo_no=None):
        self.carga = carga
        self.proximo = proximo_no

    def __repr__(self):
        return '%s -> %s' % (self.carga, self.proximo)

class Lista:
    def __init__(self): 
        self.primeiro = None
        self.ultimo   = None

    def __repr__(self):
        return "[" + str(self.primeiro) + "]"

    def insere(self, carga):
        novo_no = No(carga)
        if self.primeiro == None:
            self.primeiro = novo_no 
            self.ultimo = novo_no 
        else:
            self.ultimo.proximo = novo_no
            self.ultimo = novo_no

    def remove(self):
        assert self.primeiro != None, "Lista vazia - sem nós para remover!"
        self.primeiro = self.primeiro.proximo
        if self.primeiro == None:
            self.ultimo = None 

    def tamanho(self):
        return len(str(self.primeiro))

lista = Lista()

def imprimeLista(no):
  while no:
    print(no.carga)
    no = no.proximo
  
def Buscar(no, numProcurado):
  teste = 'Não'
  while no:
    if (no.carga == numProcurado):
      teste = 'Sim'
      break
    no = no.proximo
  return teste

oper = (-1)
while oper != 0:
  print ('\n\n----MENU DE OPÇÕES----:\n1) - Verificar se um número pertence lista\n2) - Inserir um novo elemento na lista mantendo a ordem\n3) - Remover um elemento da lista \n4) - Imprimir os valores da lista\n5) - Copiar uma lista l1 para uma lista l2\n6) - Concatenar uma lista l1 com uma lista l2\n7) - Intercalar l1 e l2\n0) - Sair\n'
)
  oper = input("Digite a operação desejada: ")
  if(oper == '1'):
    num = int(input('Digite o número a ser buscado:'))
    print('\nO número "{}" está presente na lista? {}'.format(num, Buscar(lista.primeiro, num)))
  elif(oper == '2'):
    n = int(input("Digite o valor a ser inserido:"))
    lista.insere(n)
    print("Valor adicionado.\n")
  elif(oper == '3'):
    if (lista.primeiro != None):
      print ("Primeiro valor da lista foi removido\n", lista.remove())
    else: 
      print("Lista vazia,não tem valor para ser removido\n")
  elif(oper == '4'):
    print("Lista:", lista)
  elif(oper == '5'):
    print("Copiar uma lista l1 para uma lista l2")
  elif(oper == '6'):
    print("Concatenar uma lista l1 com uma lista l2")
  elif(oper == '7'):
    print("Intercalar l1 e l2")
  elif (oper == '0'):
    break
