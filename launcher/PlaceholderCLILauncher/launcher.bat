@echo off
setlocal enabledelayedexpansion

:: Set the game executable
set GAME_EXECUTABLE=game.exe

:menu
echo ========================
echo        Game Launcher
echo ========================
echo [1] Host Game
echo [2] Join Game
echo [3] Exit
echo.
set /p choice=Select an option:

if "%choice%"=="1" goto host
if "%choice%"=="2" goto join
if "%choice%"=="3" exit

echo Invalid option. Please try again.
goto menu

:host
set /p servername=Enter Servername:
set /p modpack=Enter Modpack (leave blank for none):
echo Starting game as Host with username %servername% and modpack %modpack%...
%GAME_EXECUTABLE% --host --servername %servername% --modpack %modpack%
exit

:join
set /p username=Enter Username:
set /p ip=Enter IP address:
set /p port=Enter Port:
set /p modpack=Enter Modpack (leave blank for none):
echo Joining game at %ip%:%port% with username %username% and modpack %modpack%...
%GAME_EXECUTABLE% --join %ip% --port %port% --username %username% --modpack %modpack%
exit
