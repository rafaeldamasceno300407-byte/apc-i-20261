---
name: "Prática 09"
about: "Template para criar a issue da pratica09"
title: "[Prática 09] – Manipulação de Strings em C"
labels: ["pratica09"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Declarar e inicializar strings em C;
- Utilizar funções da biblioteca `<string.h>` para manipulação de textos.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica09
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica09`.
3. Desenvolva os arquivos solicitados:
- `concatenar_nome.c`: Ler o primeiro nome e o último nome de uma pessoa. Concatenar os dois em uma única string e exibi-la na tela;
- `ordenar_strings.c`: Ler três strings do usuário e exibir as strings em ordem alfabética;
- `verbo_ar.c`: Ler um verbo digitado pelo usuário e verificar se ele termina com "ar";
- `lista_de_palavras.c`: Ler N palavras e armazená-las em um vetor de strings. Em seguida, imprimir todas as palavras lidas.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica09`.
```bash
cd praticas/pratica09
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
git commit -m "feat: conclui pratica09. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica09
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei strings em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica09/
    ├── concatenar_nome.c
    ├── lista_de_palavras.c
    ├── ordenar_strings.c
    └── verbo_ar.c
```