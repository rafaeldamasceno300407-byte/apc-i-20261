---
name: "Prática 01"
about: "Template para criar a issue da pratica01"
title: "[Prática 01] – Estrutura Básica de um Programa em C"
labels: ["pratica01"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Criar, compilar e executar seu primeiro programa em C;
- Praticar o fluxo real de desenvolvimento: **Branch -> Code -> Pull Request**.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica01
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica01`.
3. Desenvolva os arquivos solicitados:
- `ola_mundo.c`: Exibir a mensagem `Olá, Mundo!`.
4. Digite o código abaixo:
```c
#include <stdio.h>

int main() {
    printf("Olá, Mundo!\n");
    return 0;
}
```

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica01`.
```bash
cd praticas/pratica01
```
2. Compile e execute cada programa:
```bash
gcc ola_mundo.c -lm -o a.out
./a.out
```

## 📤 Entrega da Prática
1. Abra outro terminal do VSCode (isso garante que você esteja na pasta raiz).
2. Adicione os arquivos ao controle de versão e grave suas alterações.
```bash
git add .
git commit -m "feat: conclui pratica01. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica01
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei a estrutura básica de um programa em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica01/
    └── ola_mundo.c
```