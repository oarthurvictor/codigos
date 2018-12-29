#Aluno: Arthur Victor
#Atividade - 1

lista_modelo = []
lista_consumo = []

for i in range (0,5):
  lista_modelo.append(input ("Modelo do carro: "))
  lista_consumo.append(float(input ("Consumo por litro: ")))
  print ('\n')

print ('Resultado Final')  

for i in range (0,5):
  print ('Veiculo {} - Modelo: {} - Km/l: {} - {} Litros - R$ {}'.format(i+1, lista_modelo[i], lista_consumo[i], 1000/lista_consumo[i], 4.25*(1000/lista_consumo[i])))
print ('\n')

economico = lista_consumo.index(max(lista_consumo))
print ('O carro mais economico e {}'.format(lista_modelo[economico]))
