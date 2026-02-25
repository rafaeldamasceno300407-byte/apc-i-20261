---
name: "Prática 03"
about: "Template para criar a issue da pratica03"
title: "[Prática 03] – Declaração de Variáveis e Constantes em C"
labels: ["pratica03"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Declarar e inicializar variáveis de diferentes tipos (`char`, `int`, `float` e `double`);
- Declarar constantes com `#define` e com o qualificador `const`;
- Compreender o tamanho de cada tipo de dado na memória;
- Utilizar modificadores de tipo (`short`, `long`, `long long`, `unsigned`).

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica03
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica03`.
3. Desenvolva os arquivos solicitados:
- `declara_variaveis.c`: Declarar variáveis para armazenar a idade, o sexo (`M` ou `F`), a altura (ex.: `1.75f`) e o peso (ex.: `72.845`) de uma pessoa e, em seguida, imprimir todos esses valores utilizando os especificadores de formato corretos;
- `declara_constantes.c`:  Definir a constante **PI** (`3.14159265`) utilizando `#define` e o número de **Euler** (`2.71828182`) utilizando `const`. Em seguida, imprimir os valores dessas constantes. Tente alterar o valor da constante declarada com `const` para observar o erro gerado pelo compilador;
- `tamanho_tipos.c`: Utilizar o operador `sizeof()` para imprimir o tamanho (em bytes) dos seguintes tipos: `char`, `short int`, `int`, `long int`, `long long int`, `float`, `double` e `long double`;
- `tipos_especiais.c`: Declarar variáveis para armazenar o número de países (`195`), o número de idiomas (`7100`), a população mundial (`8274065924`) e a proporção áurea (`1.61803398874989484820`) e, em seguida, imprimir esses valores utilizando os especificadores de formato corretos.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica03`.
```bash
cd praticas/pratica03
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
git commit -m "feat: conclui pratica03. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica03
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei a declaração de variáveis e constantes em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica03/
    ├── declara_constantes.c
    ├── declara_variaveis.c
    ├── tamanho_tipos.c
    └── tipos_especiais.c
```