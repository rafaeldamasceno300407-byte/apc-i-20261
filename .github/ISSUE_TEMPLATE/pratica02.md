---
name: "Prática 02"
about: "Template para criar a issue da pratica02"
title: "[Prática 02] – Saída de Dados em C"
labels: ["pratica02"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Dominar a função de saída `printf()`;
- Aprender a formatar números inteiros e decimais (casas decimais e alinhamento).

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica02
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica02`.
3. Desenvolva os arquivos solicitados:
- `imprima_caracteres.c`: Imprimir o caractere `A`, uma quebra de linha `\n`e o texto `Isso aqui eh uma string`;
- `imprima_inteiros.c`: Imprimir os números `10`, `-5` e `00004`;
- `imprima_decimais.c`: imprimir o número `3.1415926` com todas as casas e também com apenas duas casas;
- `imprima_formatado.c`: imprimir um cupom fiscal conforme layout abaixo:
```textgit checkout -b feature/pratica02
==============================
      N O T A    L E G A L
==============================
Produto         Qtd Valor Unit
Camiseta        002      39.99
Calca           001      89.90
Meia Social     003      19.99
==============================
Total                   229.85
```

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica02`.
```bash
cd praticas/pratica02
```
2. Compile e execute cada programa:
```bash
gcc nome_do_arquivo.c -lm -o a.out
./a.out
```

## 📤 Entrega da Prática
1. Abra outro terminal do VSCode (isso garante que você esteja na pasta raiz).
2. Adicione os arquivos ao controle de versão e grave suas alterações.
```bash
git add .
git commit -m "feat: conclui pratica02. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica02
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei a saída de dados em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica02/
    ├── imprima_caracteres.c
    ├── imprima_decimais.c
    ├── imprima_formatado.c
    └── imprima_inteiros.c
```