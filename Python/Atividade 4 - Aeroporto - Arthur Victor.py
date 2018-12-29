#Aluno : Arthur Victor

class Fila:
  def __init__(self): #criar fila vazia
    self.aeroporto = []
  
  def insert(self, n): #insere na fila
    self.aeroporto.append(n)

  def remove(self): #exclui primeiro da fila
    if not self.empty():
      return self.aeroporto.pop(0)
    else: 
      print ('\nA fila está vazia\n')
  
  def empty(self): #fila vazia
    return (self.aeroporto == [])
  
  def size(self): #tamanho da fila
    return (len(self.aeroporto))

  def show(self, n): #mostrar fila
    return self.aeroporto[n]

nomeAviao = Fila() 
numAviao = Fila ()
teste = 1

while teste != 0:
  print ("---- MENU DE OPÇÕES ----")
  print ("1 - Listar o número de aviões aguardando na fila de decolagem.")
  print ("2 - Autorizar a decolagem do primeiro avião da fila.")
  print ("3 - Adicionar um avião à fila de espera.")
  print ("4 - Listar todos os aviões na fila de espera.")
  print ("5 - Listar as características do primeiro avião da fila.")
  print ("0 - para sair.")
  teste = input("Digite a opção desejada: ")

  if teste == "1":
   print ('\nHá {} aviões na fila de decolagem\n'.format(numAviao.size()))
   
  elif teste == "2":
    if (nomeAviao.empty() == True):
      print ("\nNão há aviões para decolar\n")
    else:
      print ("\nAutorizando decolagem...")
      print ("O avião de nome '{}' e número '{}' foi autorizado para decolagem.\n".format(nomeAviao.remove(), numAviao.remove()))
      
  elif teste == "3":
    insere = input("\nDigite o nome do avião: ")
    nomeAviao.insert(insere)
    insere = input("Informe o número do mesmo avião: ")
    numAviao.insert(insere)        
    print ("\nAvião adicionado.\n")
    
  elif teste == "4":
    if (nomeAviao.empty() == True):
      print ("\nNão há aviões na fila de espera\n")
    else:
      print ('\nLista de aviões na fila de espera\n')
      for i in range (0,nomeAviao.size()):
        print ("\tNome: {} - Número: {}".format(nomeAviao.show(i), numAviao.show(i)))
      print ('\n')
    
  elif teste == "5":
    if (nomeAviao.empty() == True):
      print ("\nNão há aviões na fila de espera\n")
    else:
      print ("\nCaracterísticas do primeiro avião da fila:")
      print ("\tNome: {} - Número: {}\n".format(nomeAviao.show(0), numAviao.show(0)))
      
  elif teste == "0":
    print ("\nSaindo do programa...\n")
    break
  
  else:
    print("\nValor invalido.\n")
