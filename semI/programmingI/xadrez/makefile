PROJ_NAME=chess
OBJS=main.o render.o board.c pieces.o

CC=gcc
CCFLAGS=-Wall -pedantic -std=c99 -g

$(PROJ_NAME): $(OBJS)
	$(CC) -o $(PROJ_NAME) $(OBJS) $(CCFLAGS)

clear:
	@ rm -rf chess