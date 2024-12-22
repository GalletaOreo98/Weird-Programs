**Compile all:**  

```js
//Terminal > Run Task... or Ctrl+Shift+B
code --task "Compilar Todo"
```  

**Others:**  
  
```js
//Compile the resources files (version info for the .exe)
windres versioninfo.rc -o versioninfo.res
//or
windres -O coff versioninfo.rc -o versioninfo.res
```  
  
```js
//Compile the main program
g++ -o main.exe main.cpp versioninfo.res
```