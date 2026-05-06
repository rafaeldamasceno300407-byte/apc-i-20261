---
name: "Prática 08"
about: "Template para criar a issue da pratica08"
title: "[Prática 08] – Manipulação de Vetores e Matrizes em C"
labels: ["pratica08"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Declarar, inicializar e acessar elementos de vetores e matrizes em C;
- Percorrer e manipular vetores e matrizes utilizando estruturas de repetição.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica08
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica08`.
3. Desenvolva os arquivos solicitados:
- `media_aritmetica.c`: Ler n números inteiros e armazená-los em um vetor. Calcular e exibir a média aritmética dos números;
- `localiza_numero.c`: Ler 10 números inteiros e armazená-los em um vetor. Em seguida, ler um número adicional e localizar sua posição no vetor. Caso o número não seja encontrado, informar que ele não está no vetor;
- `boletim.c`: Ler as notas de uma turma de 10 alunos, sendo 2 notas por aluno. Calcular a média de cada aluno e exibir o boletim de notas;
- `diagonal_principal.c`: Ler uma matriz 3x3 e imprimir apenas os elementos da diagonal principal.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica08`.
```bash
cd praticas/pratica08
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
git commit -m "feat: conclui pratica08. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica08
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei vetores e matrizes em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica08/
    ├── boletim.c
    ├── diagonal_principal.c
    ├── localiza_numero.c
    └── media_aritmetica.c
```