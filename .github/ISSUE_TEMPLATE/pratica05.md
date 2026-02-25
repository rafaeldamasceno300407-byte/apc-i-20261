---
name: "Prática 05"
about: "Template para criar a issue da pratica05"
title: "[Prática 05] – Operadores Aritméticos e Expressões em C"
labels: ["pratica05"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Realizar cálculos matemáticos utilizando operadores aritméticos (`+`, `-`, `*`, `/`, `%`);
- Entender a precedência de operadores e o uso de parênteses;
- Aplicar conceitos de incremento (`++`) e decremento (`--`).

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica05
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica05`.
3. Desenvolva os arquivos solicitados:
- `operadores_aritmeticos.c`: Ler dois números reais fornecidos pelo usuário e exibir os resultados das quatro operações aritméticas básicas (adição, subtração, multiplicação e divisão);
- `decompor_numero.c`: Ler um número inteiro de quatro dígitos fornecido pelo usuário e exibir sua decomposição em milhares, centenas, dezenas e unidades;
- `incremento_decremento.c`: Ler um número inteiro e exibir os resultados das operações de incremento e decremento nas formas pré-fixada e pós-fixada;
- `calcula_impostos.c`: Definir constantes para as alíquotas de ICMS (17%), ISS (5%) e PIS (1,65%). Em seguida, ler o valor de um produto e calcular o valor de cada imposto individualmente, além do preço final, utilizando a fórmula: `(1+ICMS+ISS+PIS)×valor`.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica05`.
```bash
cd praticas/pratica05
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
git commit -m "feat: conclui pratica05. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica05
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei expressões em C usando operadores aritméticos. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica05/
    ├── calcula_impostos.c
    ├── decompor_numero.c
    ├── incremento_decremento.c
    └── operadores_aritmeticos.c
```