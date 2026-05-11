---
name: "Prática 07"
about: "Template para criar a issue da pratica07"
title: "[Prática 07] – Estruturas de Repetição em C"
labels: ["pratica07"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Utilizar as estruturas `for`, `while` e `do while` para repetir instruções diversas vezes;
- Controlar a execução de laços com contadores e condições.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica07
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica07`.
3. Desenvolva os arquivos solicitados:
- `fatorial.c`: Ler um número inteiro positivo e calcular o seu fatorial.
- `multiplos_de_n.c`: Ler um número inteiro N e imprimir seus múltiplos no intervalo de 1 a 100.
- `validacao_nota.c`: Ler uma nota do usuário até que o valor esteja entre 0 e 10. Exibir a nota válida lida.
- `menu_jogo.c`: Exibir um menu de jogo com as opções: `1 - Novo jogo`, `2 - Continuar jogo`, `3 - Ver pontuação` e `4 - Sair`. Ler a opção do usuário repetidamente até que seja escolhida a opção "Sair". Caso a opção seja inválida, informar o usuário.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica07`.
```bash
cd praticas/pratica07
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
git commit -m "feat: conclui pratica07. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica07
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei estruturas de repetição em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica07/
    ├── fatorial.c
    ├── menu_jogo.c
    ├── multiplos_de_n.c
    └── validacao_nota.c
```