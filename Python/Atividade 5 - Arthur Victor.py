#Aluno: Arthur Victor

class Links:
  def __init__(self): #inicia lista encadeada
    self.links = ['Facebook', 'Gmail', 'Globo', 'Google', 'Orkut']
    
  def vazia(self):
    return (len(self.links)) == 0
    
  def __str__(self): 
    return str(self.links)
    
  def imprimirLista(self):
    return self.links
    
  def capturar(self, links):
    return self.links[links]
  
  def tamanho (self):
    return (len(self.links))
    
sites = Links()
teste = 1
buscar = ()
while teste != 0:
  print ('''\n-----Escolha uma opção-----
  1 - Visualizar lista de sites.
  2 - Buscar link.
  0 - Sair.''')
  teste = int(input('Opção escolhida: '))
  
  if teste == 1:
    print ('\nSites da lista:\n')
    for i in range(0, sites.tamanho()):
      print ("{}".format(sites.capturar(i)))
  
  if teste == 2:
    buscar = input('\nQual site gostaria de ver o link?: ')
    if buscar in sites.links:
      if buscar in sites.links[0]:
        link = ("www.{}.com.br".format(buscar))
      print (buscar)
      if buscar in sites.links != [0]:
        sites.links.insert(0,buscar)
        sites.links.reverse()
        sites.links.remove(buscar)
        sites.links.reverse()
        buscar = ("\nwww.{}.com.br".format(buscar))
        print (buscar)
    if buscar not in sites.links:
      print ('\nSite não encontrado ou foi digitado de forma incorreta')
  if teste == 0:
    print ('\nSaindo...')
    break
