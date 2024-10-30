# Get Next Line

## English Version 🇬🇧

A C function that reads a line from a file descriptor, one line at a time.

### Description

The get_next_line function reads text from a file descriptor and returns one line at a time, where a line is defined as a string of characters terminated by a newline (`\n`) or end of file.

### Function Prototype

```c
char *get_next_line(int fd);
```

### Usage

```c
#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
    int fd = open("example.txt", O_RDONLY);
    char *line = get_next_line(fd);
}
```

### Compilation

Compile with the specified buffer size (example uses 42):

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c
```

### Technical Details

- Returns `NULL` if there's nothing left to read or if an error occurs
- Line includes the terminating `\n` character except at EOF
- Works with both files and standard input
- Handles different buffer sizes efficiently
- No use of global variables or `lseek()`
- Memory efficient - reads only as needed

### Files

- `get_next_line.c`: Main function implementation
- `get_next_line.h`: Function prototype and includes
- `get_next_line_utils.c`: Helper functions

## Versão em Português 🇧🇷

Uma função em C que lê uma linha de um descritor de arquivo, uma linha por vez.

### Descrição

A função get_next_line lê texto de um descritor de arquivo e retorna uma linha por vez, onde uma linha é definida como uma string de caracteres terminada por uma nova linha (`\n`) ou fim do arquivo.

### Protótipo da Função

```c
char *get_next_line(int fd);
```

### Uso

```c
#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
    int fd = open("exemplo.txt", O_RDONLY);
    char *linha = get_next_line(fd);
}
```

### Compilação

Compile com o tamanho de buffer especificado (exemplo usa 42):

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c
```

### Detalhes Técnicos

- Retorna `NULL` se não houver mais nada para ler ou se ocorrer um erro
- A linha inclui o caractere terminador `\n`, exceto no final do arquivo
- Funciona tanto com arquivos quanto com entrada padrão
- Lida com diferentes tamanhos de buffer de forma eficiente
- Não utiliza variáveis globais ou `lseek()`
- Eficiente em memória - lê apenas conforme necessário

### Arquivos

- `get_next_line.c`: Implementação da função principal
- `get_next_line.h`: Protótipo da função e includes
- `get_next_line_utils.c`: Funções auxiliares

# Licença

[Licença MIT](LICENSE) © Nathalia Buchholz