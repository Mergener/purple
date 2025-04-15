@echo off
setlocal

cd src\gen

for %%f in (*) do (
    if /I not "%%f"=="CMakeLists.txt" del "%%f"
)

for /D %%d in (*) do (
    rd /s /q "%%d"
)

cd ..
cd ..
antlr src/purple_grammar.g4 -o src/gen -Dlanguage=Cpp