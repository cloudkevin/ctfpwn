# ctfpwn

gcc -c -fPIC ctf_pwn.c -o pwn.o

gcc -shared -fPIC pwn.o -o ctfpwn.so

Enable -f ./ctfpwn.so asd
