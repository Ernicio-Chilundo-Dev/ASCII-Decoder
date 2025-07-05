# ASCII Decoder

Um programa simples em C para converter entre caracteres e seus códigos ASCII correspondentes.

## Funcionalidades

- Converter um caractere para seu código ASCII.
- Converter um código ASCII (0-127) para o caractere correspondente.
- Informa se o código ASCII é um caractere de controle (não visível).

## Como usar

1. Compile o programa:

   ```bash
   gcc ascii_decoder.c -o ascii_decoder

    Execute:

    ./ascii_decoder

    Siga as instruções no menu:

        Digite 1 para converter um caractere em código ASCII.

        Digite 2 para converter um código ASCII em caractere.

Exemplo de uso

===== ASCII DECODER =====

1. Convert a character to Ascii code.
2. Convert Ascii code to a character.
Choose an option(1 or 2): 1
Digit a character: A
Character A have to the code Ascii 65

===== ASCII DECODER =====

1. Convert a character to Ascii code.
2. Convert Ascii code to a character.
Choose an option(1 or 2): 2
Enter a number between (0 - 127): 97
Code Ascii 97 repesents the character a

===== ASCII DECODER =====

1. Convert a character to Ascii code.
2. Convert Ascii code to a character.
Choose an option(1 or 2): 2
Enter a number between (0 - 127): 10
Code Ascii 10 it is a control character(not visible)

Requisitos

    Compilador C compatível com C99 ou superior.

    Biblioteca padrão <stdio.h> e <ctype.h>.

Melhorias futuras

    Validar entradas para prevenir erros no scanf.

    Adicionar suporte para múltiplas conversões sem reiniciar o programa.

    Implementar interface gráfica ou em terminal com cores.