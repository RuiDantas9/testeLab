# Variáveis
CC = gcc                    # Compilador
CFLAGS = -Wall -g           # Flags de compilação
OBJ = main.o menus.o utils.o # Objetos gerados pelos arquivos .c
TARGET = meu_programa       # Nome do executável final

# Regra principal
all: $(TARGET)

# Regras de compilação
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpar os arquivos gerados
clean:
	rm -f $(OBJ) $(TARGET)
