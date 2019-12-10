# ctfpwn

Update the uid first to match your user

gcc -c -fPIC ctf_pwn.c -o pwn.o

gcc -shared -fPIC pwn.o -o ctfpwn.so

Enable -f ./ctfpwn.so asd

Depending on what's available on the server you may need to use something like a heredoc to cat your code
