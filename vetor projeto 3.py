import json

with open('dados.json', 'r') as f:
    dados = json.load(f)

minimo = float('inf')
maximo = float('-inf')
soma = 0
dias_acima_media = 0

for dia in dados:
    valor = dia['valor']
    if valor > maximo:
        maximo = valor
    if valor < minimo:
        minimo = valor
    soma += valor

media = soma / len(dados)

for dia in dados:
    if dia['valor'] > media:
        dias_acima_media += 1

print(f'Menor valor do mês: {minimo}')
print(f'Maior valor do mês: {maximo}')
print(f'Dias acima da média: {dias_acima_media}')
