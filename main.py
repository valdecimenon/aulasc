lista_contatos = [
    ('Joao', '1234-5678'),
    ('Pedro', '9999-9999'),
    ('Ana', '8765-4321'),
    ('Mariana', '8877-7788')
]

contatos = dict(lista_contatos)
print(contatos)

print("Telefone da ana:", contatos['Ana'])
if not ('Zacarias' in contatos):
    print('Conato Zacarias não existe!')
else:
    print("Telefone do Zacarias: ", contatos['Zacarias'])

print(contatos.keys())
print(contatos.values())

#Adicionando nova chave e valor
contatos['Luiz'] = '5544-5544'
print(contatos.keys())
print("Fone do Luiz:", contatos['Luiz'])

#Removendo
del contatos['Luiz']
print(contatos.keys())