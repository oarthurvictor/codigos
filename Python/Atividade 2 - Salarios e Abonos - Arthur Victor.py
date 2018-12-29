#Aluno: Arthur Victor

recebe_salarios = [ [],[] ]
teste = 1

while teste != 0:
  teste = float(input("Digite o salário: "))
  if teste != 0:
    recebe_salarios[0].append(teste)
    if (teste*0.2) >= 100:
      recebe_salarios[1].append(teste*0.2)
    else:
      recebe_salarios[1].append(100)
      
print ('\nSalário      -   Abono')

for i in range(0,len(recebe_salarios[0])):
  print ('R$ {}  - R$ {}'.format(recebe_salarios[0][0+i], recebe_salarios[1][0+i]))

print ('\nForam processados {} colaboradores'.format(len(recebe_salarios[0])))

total_abono = 0
for i in range (0,len(recebe_salarios[1])):
  total_abono = total_abono + recebe_salarios[1][0+i]
print ('Total gasto com abonos: R$ {}'.format(total_abono))

total_minimo = 0
for i in range(0,len(recebe_salarios[1])):
  if (recebe_salarios[1][0+i] == 100):
    total_minimo = total_minimo+1
print  ('Valor mínimo foi pago a {} colaboradores'.format(total_minimo))
print ('Maior valor de abono pago: R$ {}'.format(max(recebe_salarios[1])))
