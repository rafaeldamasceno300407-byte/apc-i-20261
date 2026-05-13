---
name: "Prática 10"
about: "Template para criar a issue da pratica10"
title: "[Prática 10] – Tipos Estruturados e Enumerações em C"
labels: ["pratica10"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Criar tipos de dados personalizados utilizando `struct`;
- Declarar e inicializar variáveis baseadas em tipos estruturados;
- Definir e utilizar enumerações com `enum`.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica10
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica10`.
3. Desenvolva os arquivos solicitados:
- `cadastro_pessoa.c`: Criar uma estrutura Pessoa com campos: nome, idade, altura e sexo. Ler os dados de uma pessoa e exibi-los;
- `lista_de_alunos.c`: Criar uma estrutura Aluno com campos: nome e matricula. Ler os dados de 5 alunos e exibir a lista completa;
- `dia_da_semana.c`: Criar uma enumeração DiaSemana com os dias da semana. Ler um número de 1 a 7 e exibir o dia correspondente;
- `playlist.c`: Criar uma enumeração GeneroMusical com valores POP, ROCK e MPB. Criar uma estrutura Musica com campos titulo, duracao e genero (do tipo GeneroMusical). Ler os dados de 5 músicas e exibir a playlist completa.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica10`.
```bash
cd praticas/pratica10
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
git commit -m "feat: conclui pratica10. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica10
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei tipos estruturados e enumerações em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica10/
    ├── cadastro_pessoa.c
    ├── dia_da_semana.c
    ├── lista_de_alunos.c
    └── playlist.c
```