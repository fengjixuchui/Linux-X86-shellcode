void main(){

    unsigned char shellcode[] = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x31\xc9\xb0\x0b\xcd\x80\x31\xdb\x31\xc0\xb0\x01\xcd\x80";
    unsigned char printcode[] = "\x31\xc0\x31\xdb\x31\xc9\x31\xd2\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe1\xb2\x14\xb3\x01\xb0\x04\xcd\x80\x31\xdb\xb0\x01\xcd\x80";

    int (*shell)() = (int(*)())shellcode;
    int (*print)() = (int(*)())printcode;

    //shell();
    print();
}
