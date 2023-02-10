default: chars

chars:
	gcc -g -o prog main_chars.c pqueueElem.c pqueueImplementation.c

clients:
	gcc -g -o prog main_clients.c pqueueElem.c pqueueImplementation.c client.c

clean:
	rm -f prog
