@echo off
setlocal enabledelayedexpansion

:: Set the game executable
set GAME_EXECUTABLE=PVZ.Main_Win64_Retail.exe

@FOR /f "tokens=3*" %%i in ('Reg Query "HKEY_LOCAL_MACHINE\SOFTWARE\WOW6432Node\PopCap\Plants vs Zombies Garden Warfare" /v "Install Dir" 2^>Nul') do Set "GAME_PATH=%%j"

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

:: Launch option used in bb2 launcher `-GameTime.MaxSimFps -1`

:: Some sort of cli-dll injector might be required to make the launch args actually pass through the game.

:: DLL Injector stuff (Was going to make it dl with curl but turns out its licensed under MIT so it all good if we include it
:: 

:host
set /p servername=Enter Servername:
set /p port=Enter port:
set /p maxplayers=Enter maxplayers:
set /p modpack=Enter Modpack (leave blank for none):
echo Starting game as Host with username %servername% and modpack %modpack%...
"%GAME_PATH%%GAME_EXECUTABLE%" --host --servername --port %port% %servername% --maxplayers %maxplayers% -modpack %modpack%
exit

:join
set /p username=Enter Username:
set /p ip=Enter IP address:
set /p password=Enter password:
set /p modpack=Enter Modpack:
echo Joining game at %ip%:%port% with username %username% and modpack %modpack%...
"%GAME_PATH%%GAME_EXECUTABLE%" --Client.ServerIp %ip% --playerName %username% -password %password% -dataPath %modpack%
exit
