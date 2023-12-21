This task is for static and dynamic creating of library files and compiling a simple calculator application with these libraries.

After compilation, comparing the static and dynamic versions using the
following commands:

ldd command:
calcDynamic:

![image-20231222004812349](/home/abdelrahman/snap/typora/86/.config/Typora/typora-user-images/image-20231222004812349.png)

calcStatic:
![image-20231222004914547](/home/abdelrahman/snap/typora/86/.config/Typora/typora-user-images/image-20231222004914547.png)



file command:
calcDynamic:

![image-20231222005037493](/home/abdelrahman/snap/typora/86/.config/Typora/typora-user-images/image-20231222005037493.png)

calcStatic:
![image-20231222005122861](/home/abdelrahman/snap/typora/86/.config/Typora/typora-user-images/image-20231222005122861.png)



objdump -t command (Display symbol table of executable):
calcDynamic:

![image-20231222005542185](/home/abdelrahman/snap/typora/86/.config/Typora/typora-user-images/image-20231222005542185.png)

calcStatic:
![image-20231222005756440](/home/abdelrahman/snap/typora/86/.config/Typora/typora-user-images/image-20231222005756440.png)