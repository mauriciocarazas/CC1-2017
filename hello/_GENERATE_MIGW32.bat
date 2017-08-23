@echo off 

mkdir build
chdir build
mkdir mak.mingw
chdir mak.mingw

del CMakeCache.txt


D:\cmake-3.9.1-win64-x64\bin\cmake -G "MinGW Makefiles" ../../

if %errorlevel% NEQ 0 goto error
goto end 

:error
echo Houve um erro. Presionne qualquer tecla para finalizar.
pause > nul

:end