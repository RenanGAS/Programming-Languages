## Instalação

- `sudo apt install swig --assume-yes`
- `sudo apt install python3-dev --assume-yes`

## Passos

- `swig -python exemplo.i`
- `gcc -c -fpic exemplo.c exemplo_wrap.c -I/usr/include/python3.11`
- `gcc -shared exemplo.o exemplo_wrap.o -o _exemplo.so`
