CC=gcc
SRC = T1.c T2.c T3.c T4.c T5.c
OBJ = T1.o T2.o T3.o T4.o T5.o
TARGET = w3l1
all: $(TARGET)

$(TARGET):$(OBJ)
	$(CC) -o $@ $(OBJ)

%.o: %.c
	$(CC) -c $< -o $@
clean:
	rm -f $(OBJ) $(TARGET)
