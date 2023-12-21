This task is for static and dynamic creating of library files and compiling a simple calculator application with these libraries.

After compilation, comparing the static and dynamic versions using the
following commands:

ldd command:
calcDynamic:
![image-20231222004812349](https://github.com/abdelrahmann25/Embedded_Linux/blob/ada906f273dafcc0c3f0b24e74ed29fe328e8dba/EmbeddedLinux_Task1/images/Screenshot%20from%202023-12-22%2000-48-09.png)

calcStatic:
![image-20231222004914547](https://github.com/abdelrahmann25/Embedded_Linux/blob/a5857712ffabb142ce89dc5694381a534b5b6b28/EmbeddedLinux_Task1/images/Screenshot%20from%202023-12-22%2000-49-09.png)



file command:
calcDynamic:
![image-20231222005037493](https://github.com/abdelrahmann25/Embedded_Linux/blob/a5857712ffabb142ce89dc5694381a534b5b6b28/EmbeddedLinux_Task1/images/Screenshot%20from%202023-12-22%2000-50-07.png)

calcStatic:
![image-20231222005122861](https://github.com/abdelrahmann25/Embedded_Linux/blob/a5857712ffabb142ce89dc5694381a534b5b6b28/EmbeddedLinux_Task1/images/Screenshot%20from%202023-12-22%2000-51-13.png)



objdump -t command (Display symbol table of executable):
calcDynamic:

![image-20231222005542185](https://github.com/abdelrahmann25/Embedded_Linux/blob/a5857712ffabb142ce89dc5694381a534b5b6b28/EmbeddedLinux_Task1/images/Screenshot%20from%202023-12-22%2000-54-38.png)

calcStatic:
![image-20231222005756440](https://github.com/abdelrahmann25/Embedded_Linux/blob/a5857712ffabb142ce89dc5694381a534b5b6b28/EmbeddedLinux_Task1/images/Screenshot%20from%202023-12-22%2000-57-52.png)
