CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
SRCS = main_executable_module.c ../data_libs/data_io.c data_sort.c ../data_libs/data_stat.c ../data_module/data_process.c ../yet_another_decision_module/decision.c
OBJS = $(SRCS:.c=.o)
Quest_3 = ../../build/Quest_3
Quest_4 = ../../build/Quest_4

all: Quest_3 Quest_4 clean

Quest_3: $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -lm -o $(Quest_3)

Quest_4: $(OBJS)
	$(CC) -DUSE_MACRO_IO $(CFLAGS) $(SRCS) -lm -o $(Quest_4)

clean:
	rm -rf ${OBJS}