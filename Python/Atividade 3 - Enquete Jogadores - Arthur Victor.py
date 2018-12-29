#Aluno: Arthur Victor

def calcular_percentual (qtd_votos, qtd_total):
  percentual = float((qtd_votos*100)/qtd_total)
  return percentual
  
enquete_jogadores = []
votosTotal = []
teste = []
cont = 0

print ('Enquete: Quem foi o melhor jogador?\n')

while teste != 0:
  teste = int(input("Número do jogador (0 para sair): "))
  if teste == 0:
    break
  if teste >= 1 and teste <= 23:
    votosTotal.append(cont)
    cont += 1
    enquete_jogadores.append(teste)
  else:
    print ("Informe um número de 1 a 23 ou 0 para sair.")

arq = open ("resultado_da_enquete.txt", "w")
arq.write ("\nResultado da votação:\n")
arq.write ("Foram computados {} votos.\n".format(cont))
arq.write ("Jogador   -   Votos  -   Porcentagem \n")

print ("\nResultado da votação:\n")
print ("Foram computados {} votos.\n".format(cont))
print ("Jogador   -   Votos  -   Porcentagem \n")

melhorJ = 0
votosJ = 1

for n in range(1,24):
  pJogadores = calcular_percentual(enquete_jogadores.count(n), len(votosTotal))
  if enquete_jogadores.count(n) > 0:
    print ("{}\t   -  {}\t  -  {:.1f}% \n".format(n, enquete_jogadores.count(n), pJogadores ))
    if enquete_jogadores.count(n) > 0:
      votosJ = enquete_jogadores.count(n)
      melhorJ = n
      cPercert = pJogadores
  
arq.write ("O melhor jogador foi o número {}, com {} votos correspondedo a {:.1f}% do total de votos.". format(votosJ, melhorJ, cPercert))
print ("O melhor jogador foi o número {}, com {} votos correspondedo a {:.1f}% do total de votos.". format(melhorJ, votosJ, cPercert))

arq.close ()
