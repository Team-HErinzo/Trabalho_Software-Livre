# Trabalho Prático – Sistemas de Software Livre

Este repositório contém o desenvolvimento do trabalho da disciplina **Sistemas de Software Livre**, utilizando práticas modernas como **Git**, **branches**, **Makefile**, **Bash**, **G++** e repositório público no GitHub.

## 👨‍💻 Eric Andrew

- **Aluno:** Eric Andrew Bertolazzi Rodrigues da Rosa (Team HErinzo)  
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

Depois de concluir cada parte, criei a branch chamada `main`, usando `git push -u origin main`.

---

## 🚀 Processo de Desenvolvimento

1. Criei o repositório público no GitHub  
2. Clonei localmente usando WSL Ubuntu  
3. Desenvolvi cada funcionalidade em sua branch  
4. Fiz commits claros e enviados via `git commit`  
5. Criei o Makefile e scripts de teste  
6. Testei todos localmente (`make`, redirecionamento de entrada, scripts)  
7. Criei a branch `main`  
8. Atualizei o `README.md` para explicar tudo  
9. Criei `entrega.txt` com o link do repositório

---

## ❗ Dificuldades Encontradas

Durante o desenvolvimento do trabalho, enfrentei alguns desafios importantes:

- **Organização com Git:** Tive que **refazer o trabalho** devido ao uso incorreto de *commits* e *branches*. Aprendi a importância de manter cada funcionalidade em uma branch separada e fazer *commits* claros e pequenos.

- **Execução dos scripts `.sh`:** No início, **não compreendia como executar corretamente os arquivos Bash**, especialmente como dar permissão de execução com `chmod +x`.

- **Uso do Makefile:** Tive dificuldades para **compilar usando o `make`**, pois precisei instalar dependências adicionais no Ubuntu (como o `g++` e o `make`).

- **Criação do `README.md`:** Montar um `README.md` explicativo e bem estruturado foi desafiador. Pesquisei bastante sobre a sintaxe Markdown para garantir que ficasse informativo e visualmente agradável.

---

## 📎 Link de entrega

O repositório final está aqui  
📌 https://github.com/Team-HErinzo/Trabalho_Software-Livre

---

## 📃 Licença

Este trabalho é de uso acadêmico e educacional.  
🔗 https://github.com/Team-HErinzo/Trabalho_Software-Livre
