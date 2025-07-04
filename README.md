# Trabalho Prático – Sistemas de Software Livre

Este repositório contém o desenvolvimento do trabalho da disciplina **Sistemas de Software Livre**, utilizando práticas modernas como **Git**, **branches**, **Makefile**, **Bash**, **G++** e repositório público no GitHub.

## 👨‍💻 Eric Andrew

- **Aluno:** Eric Andrew (Team HErinzo)  
- **Disciplina:** Sistemas de Software Livre  

---

## 📌 Estrutura do Projeto

```
Trabalho_Software-Livre/
├── primo.cpp
├── vetor.cpp
├── matriz.cpp
├── Makefile
├── generate-test-primo.sh
├── generate-test-vetor.sh
├── generate-test-matriz.sh
├── test-primo.in
├── test-vetor.in
├── test-matriz.in
├── README.md
└── entrega.txt
```

---

## 🧠 Descrição dos Programas

### 🔹 `primo.cpp`
- Verifica se um número é primo.
- Entrada: um número (`cin`)
- Saída: `Primo` ou `Não é primo`

### 🔹 `vetor.cpp`
- Encontra o maior valor de um vetor de inteiros.
- Entrada: um inteiro `n` seguido de `n` valores
- Saída: maior valor do vetor

### 🔹 `matriz.cpp`
- Opera sobre duas matrizes quadradas (adição, subtração ou multiplicação).
- Entrada:
  1. `n` (tamanho da matriz)
  2. Matriz A (`n×n`)
  3. Matriz B (`n×n`)
  4. Operação (`a`, `s` ou `m`)
- Saída: matriz resultante

---

## ⚙️ Compilação (Makefile)

Use os comandos abaixo para compilar:

```bash
make         # compila todos os programas
make primo   # compila apenas primo.cpp
make vetor   # compila apenas vetor.cpp
make matriz  # compila apenas matriz.cpp
make clean   # remove os executáveis
```

---

## 🧪 Testes automatizados (scripts `.sh`)

Estes scripts geram arquivos de teste:

```bash
chmod +x generate-test-*.sh
./generate-test-primo.sh
./generate-test-vetor.sh
./generate-test-matriz.sh
```

Você poderá testar com:

```bash
./primo < test-primo.in
./vetor < test‑vetor.in
./matriz < test-matriz.in
```

---

## 🔁 Controle de versão com Git

Cada parte do trabalho foi desenvolvida em branches separadas:

- `primo`: identificação de número primo
- `vetor`: maior valor em vetor
- `matriz`: operações com matrizes
- `makefile`: inclusão do Makefile
- `scripts`: geração de testes

Depois de concluir cada parte, fiz merge na `main`.

---

## 🚀 Processo de Desenvolvimento

1. Criei o repositório público no GitHub  
2. Clonei localmente usando WSL Ubuntu  
3. Desenvolvi cada funcionalidade em sua branch  
4. Fiz commits claros e enviados via `git push`  
5. Criei o Makefile e scripts de teste  
6. Testei todos localmente (`make`, redirecionamento de entrada, scripts)  
7. Fiz merge de cada branch na `main`  
8. Atualizei o `README.md` para explicar tudo  
9. Criei `entrega.txt` com o link do repositório

---

## 📎 Link de entrega

O repositório final está aqui  
📌 https://github.com/Team-HErinzo/Trabalho_Software-Livre

---

## 📃 Licença

Este trabalho é de uso acadêmico e educacional.
