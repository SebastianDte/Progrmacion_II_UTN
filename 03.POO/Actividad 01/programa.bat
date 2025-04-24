@echo off
REM Compilar los archivos necesarios
g++ -o main.exe main.cpp Postulante.cpp Evaluador.cpp

REM Verificar si la compilación fue exitosa
if %errorlevel% neq 0 (
    echo Error en la compilación.
    pause
    exit /b %errorlevel%
)

REM Ejecutar el programa compilado
start "" cmd /k main.exe

exit
