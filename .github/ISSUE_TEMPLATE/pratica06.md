---
name: "Prática 06"
about: "Template para criar a issue da pratica06"
title: "[Prática 06] – Estruturas de Seleção em C"
labels: ["pratica06"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Utilizar as estruturas `if`, `else` e `else if` para controle do fluxo de execução;
- Implementar estruturas de seleção múltipla com `switch`.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica06
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica06`.
3. Desenvolva os arquivos solicitados:
- `par_impar.c`: Ler um número inteiro e informar se ele é par ou impar;
- `classificacao_idade.c`: Ler a idade de uma pessoa e classificar como: criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) e idoso (65+ anos); 
- `dia_da_semana.c`: Ler um número correspondente ao dia da semana (1 a 7) e informar se é: dia útil ou final de semana;
- `menu_jogo.c`: Exibir um menu de jogo com as opções: `1 - Novo jogo`, `2 - Continuar jogo`, `3 - Ver pontuação` e `4 - Sair`. Ler a opção escolhida e exibir a mensagem correspondente. Caso a opção seja inválida, informar o usuário.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica06`.
```bash
cd praticas/pratica06
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
git commit -m "feat: conclui pratica06. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica06
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei estruturas de seleção em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica06/
    ├── classificacao_idade.c
    ├── dia_da_semana.c
    ├── menu_jogo.c
    └── par_impar.c
```