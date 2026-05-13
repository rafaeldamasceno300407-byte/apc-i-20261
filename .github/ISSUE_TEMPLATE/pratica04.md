---
name: "Prática 04"
about: "Template para criar a issue da pratica04"
title: "[Prática 04] – Entrada de Dados em C"
labels: ["pratica04"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Dominar a função de entrada `scanf()`;
- Aprender a ler caracteres, números inteiros e decimais.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica04
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica04`.
3. Desenvolva os arquivos solicitados:
- `leia_caracteres.c`: Ler um caractere digitado pelo usuário e imprimir o caractere informado e seu respectivo código na tabela **ASCII**;
- `leia_inteiros.c`: Ler dois números inteiros fornecidos pelo usuário e exibir os valores lidos;
- `leia_decimais.c`: Ler duas notas de um aluno fornecidas pelo usuário e exibir os valores lidos;
- `leia_dados.c`: Ler a idade, a altura (ex.: `1.75`), o sexo (`M` ou `F`) e o peso (ex.: `72.825` de uma pessoa e exibir todas as informações organizadas em formato de ficha cadastral.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica04`.
```bash
cd praticas/pratica04
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
git commit -m "feat: conclui pratica04. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica04
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei a entrada de dados em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica04/
    ├── leia_caracteres.c
    ├── leia_dados.c
    ├── leia_decimais.c 
    └── leia_inteiros.c
```