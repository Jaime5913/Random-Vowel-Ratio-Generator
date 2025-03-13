CC = gcc

files = Initiator.c Worker.c
out_exe = Initiator

$(out_exe): $(files)
	$(CC) -o $(out_exe) $(files)

tar:
	tar -cvzf File-Name.tar *.c *.h *.txt Makefile

clean:
	rm -f $(out_exe) *.o
